import math
import os
import random
import re
import sys

def solve(s) :
    words = s.split(' ')

    for i in range(len(words)) :
        if(words[i]) :
            words[i] = words[i][0].upper() + words[i][1:]

    return ' '.join(words)

if __name__ == '__main__' :
    s = input()
    print(solve(s)) 