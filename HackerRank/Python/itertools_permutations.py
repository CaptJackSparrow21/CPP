import sys
input = sys.stdin.readline
from math import *
from itertools import permutations

s, k = input().split()
k = int(k)

for p in sorted(permutations(s, k)) :
    print(''.join(p))
    