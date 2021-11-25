#! /usr/bin/python3

import sys

list = ["a", "b", "c", "b"]
it = iter(list)
while True:
    try:
        print(next(it))
    
    except StopIteration:
        sys.exit()