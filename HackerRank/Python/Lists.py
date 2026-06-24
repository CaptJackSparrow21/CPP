import sys
input = sys.stdin.readline
import math
from math import *

n = int(input())

l = []

for _ in range(n) :
    s = input().split()

    if s[0] == "insert" :
        l.insert(int(s[1]), int(s[2]))

    elif s[0] == "print" :
        print(l)

    elif s[0] == "remove" :
        l.remove(int(s[1]))

    elif