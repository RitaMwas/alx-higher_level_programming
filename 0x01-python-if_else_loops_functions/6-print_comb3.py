#!/usr/bin/python3
for num in range(0, 10):
    for i in range(1, 10):
        if num >= i:
            continue
        elif num == 8 and i == 9:
            print("{}{}".format(num, i))
        else:
            print("{}{}".format(num, i), end=", ")
