#!python3

import sys
import random
from PIL import ImageFont
import itertools

NONE = 0
NORM = 1
REV = 2


COLOR_MAPS = {
    "gray": (range(232, 232 + 24 + 1), NORM, REV),
    "pink": (range(196, 196 + 36 + 1), NONE, REV),
    "pink2": (range(124, 141 + 1), NONE, NORM),
    "matrix": (range(22, 226 + 1, 6), NORM, NONE),
}

lipsum = itertools.cycle(
    """Lorem ipsum dolor sit amet, consectetur adipiscing elit. Maecenas congue, sem quis consectetur vehicula, nulla nisi vulputate lorem, ac pharetra ipsum elit laoreet lacus. Nunc eu dapibus risus. Nunc sed commodo ex. Donec placerat, odio sit amet consectetur porttitor, lorem nibh dapibus dui, eget gravida odio velit ut purus. Maecenas et nunc lacinia, commodo leo et, pellentesque lectus. Nunc eget velit sem. Nunc mattis eros turpis, eu commodo orci accumsan nec. Nunc sit amet elit in lorem sollicitudin faucibus. Vestibulum et purus turpis. """
)

TEXT_PRESETS = {
    "ascii": lambda ch: 2 * valmap(" .,:;sg!%UNM$#", ch),
    "hex": lambda ch: f"{ch:02x}",
    "hex2": lambda ch: ch in [0, 255] and "  " or f"{ch:02x}",
    "spaces": lambda ch: "  ",
    "katakana": lambda ch: chr(random.randint(0x30A0, 0x30FF)),
    "katakana2": lambda ch: ch == 0 and "\u3000" or chr(random.randint(0x30A0, 0x30FF)),
    "emoji": lambda ch: ch == 0 and "\u3000" or chr(random.randint(0x1F600, 0x1F64F)),
    "lipsum": lambda ch: ch == 0 and "  " or next(lipsum) + next(lipsum),
}

PRESETS = {
    "matrix": ("matrix", "katakana"),
    "shades": ("gray", "hex2"),
    "ascii": (None, "ascii"),
    "pink": ("pink2", "spaces"),
    "emoji": (None, "emoji"),
    "lipsum": (None, "lipsum"),
    "japanese": ("pink", "katakana2"),
}


RESET = "\033[0m"


def setfg(col):
    return f"\033[38;5;{col}m"


def setbg(col):
    return f"\033[48;5;{col}m"


def valmap(values, val):
    idx = int(val / 256 * len(values))
    return values[idx]


def color(val, color_preset):
    colrange, fgtype, bgtype = COLOR_MAPS[color_preset]
    ret = ""
    if not colrange:
        return ret

    for colfunc, coltype in [(setfg, fgtype), (setbg, bgtype)]:
        if coltype == NORM:
            ret += colfunc(valmap(colrange, val))
        elif coltype == REV:
            ret += colfunc(valmap(colrange, 255 - val))

    return ret


def one_char(val, preset):
    p_col, p_text = PRESETS[preset]
    txtfunc = TEXT_PRESETS[p_text]
    txt = "  "
    col = ""
    if txtfunc:
        txt = txtfunc(val)
    if p_col:
        col = color(val, p_col)
    return col + txt


def draw_heart(size, preset):
    font = ImageFont.truetype("DejaVuSans.ttf", size=size)
    mask = font.getmask("\u2665")
    height, width = mask.size
    for y in range(width):
        for x in range(height):
            col = mask.getpixel((x, y))
            print(one_char(col, preset), end=RESET)
        print()


def main():
    size = 24
    preset = random.choice(list(PRESETS.keys()))

    if len(sys.argv) > 1 and sys.argv[1].isdigit():
        size = int(sys.argv[1])
    if len(sys.argv) > 2:
        preset = sys.argv[2]

    if preset not in PRESETS:
        print("valid presets:", " ".join(PRESETS.keys()))
    else:
        draw_heart(size, preset)


if __name__ == "__main__":
    main()