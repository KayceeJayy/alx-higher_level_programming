#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    i = 1
    argc = len(sys.argv) - 1
    if len(sys.argv) < 2:
        print("0 arguments.")
    elif len(sys.argv) < 3:
        print("1 argument:")
    else:
        print("{:d} arguments:".format(argc))

    for arg in sys.argv[i:]:
        print("{:d}: {:s}".format(i, arg))
        i += 1
