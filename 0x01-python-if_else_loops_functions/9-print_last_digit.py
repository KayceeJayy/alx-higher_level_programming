#!/usr/bin/python3
def print_last_digit(number):
    """Let us print the last digit of a number"""
    dig = number % 10 if number >= 0 else (number * -1) % 10
    print("{:d}".format(dig), end="")
    return dig
