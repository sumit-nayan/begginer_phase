import time

# Define the man animation frames as a list of strings
man_frames = [
    " o ",
    "/|\\",
    "/ \\"
]

# Define the number of spaces to clear between frames
clear_space = "\n" * 100

# Define the number of times to repeat the animation
num_repeats = 5

# Loop through the animation frames
for i in range(num_repeats):
    for frame in man_frames:
        # Clear the terminal screen
        print(clear_space)

        # Print the current frame of the man animation
        print(" " * 10 + frame)

        # Pause for a short time before showing the next frame
        time.sleep(0.1)
