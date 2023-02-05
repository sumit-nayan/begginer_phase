import re
import json
from time import sleep
from getpass import getpass
import urllib.request
import os
import argparse
from selenium.webdriver.common.by import By

def str2bool(v):
    if isinstance(v, bool):
        return v
    if v.lower() in ("yes", "true", "t", "y", "1"):
        return True
    elif v.lower() in ("no", "false", "f", "n", "0"):
        return False
    else:
        raise argparse.ArgumentTypeError("Boolean value expected.")


def check_post_url(post_url):
    if len(post_url)>0:
        return post_url
    else:
        print("You haven't entered required post_url in Config.py file!")
        choice = input("Do you want to enter url now? (y/N) : ")
        if choice.lower() == "y":
            post_url = input("Enter url of post: ")
            return post_url
        elif choice.lower() == "n":
            exit()
        else:
            print("Invalid choice!")
            exit()


def login_details():
    username = input("Enter your email registered in LinkedIn : ")
    password = getpass("Enter your password : ")

    return username, password



def load_more_comments(load_comments_class, driver):
    try:
        load_more_button = driver.find_element(By.CLASS_NAME,load_comments_class)
        print("[", end="", flush=True)
        while True:
            load_more_button.click()
            sleep(5)
            # 5 second sleep works great for medium-speed net...you can increase if this time seems too less and program finishes before loading all comments....you may decrease till 3 if you have fast internet speed
            try:
                load_more_button = driver.find_element(
                    By.CLASS_NAME,load_comments_class
                )
            except:
                print("]")
                print("All comments have been displayed!")
                break
            print("#", end="", flush=True)
    except:
        print("All comments are displaying already!")


def extract_emails(comments):
    emails = []
    for comment in comments:
        email_match = re.findall(r"[\w\.-]+@[\w\.-]+\.\w+", comment)
        if email_match:
            emails.append(email_match)
        else:
            emails.append(" ")
    print(emails)

    return emails


def write_data2csv(names, emails, comments, writer):
    for name, email, comment in zip(names,  emails, comments):
        email_Str=""
        for email_Single in email:
            email_Str=email_Str+email_Single+" "
        writer.writerow([name, email_Str.strip(), comment.encode("utf-8")])
        # utf-8 encoding helps to deal with emojis


def download_avatars(urls, filenames, dir_name):
    try:
        os.mkdir(dir_name)
    except:
        pass

    filenames = [
        filename.lower().replace(".", "").replace(" ", "-") for filename in filenames
    ]

    opener = urllib.request.build_opener()
    opener.addheaders = [
        (
            "User-Agent",
            "Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/36.0.1941.0 Safari/537.36",
        )
    ]
    urllib.request.install_opener(opener)

    for url, filename in zip(urls, filenames):
        urllib.request.urlretrieve(url, f"{dir_name}/{filename}.jpg")

    print("Profile pictures have been downloaded!")
