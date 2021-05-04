from cs50 import get_string
from sys import argv
def main():
    bleepers = get_bleepers()
    message = get_message("What message would you like to censor?\n")
    print(censor_msg(message, bleepers))
def get_bleepers():
    if len(argv) == 2:
        bleepers = set()
        file = open(argv[1], "r")
        for line in file:
            bleepers.add(line.rstrip("\n"))
        file.close()
        return bleepers
    else:
        print("Usage: python bleep.py dictionary")
        exit(1)
def get_message(prompt):
    return get_string(prompt)
def censor_msg(msg, bleepers):
    censored_msg = ""
    words = msg.split(" ")
    for word in words:
        if word.lower() in bleepers:
            censored_msg += ("*" * len(word)) + " "
        else:
            censored_msg += word + " "
    return censored_msg
if __name__ == "__main__":
    main()