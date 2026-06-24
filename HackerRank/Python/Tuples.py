import sys
input = sys.stdin.readline
import math
from math import *

#only works in python 2
n = int(input())
ans = map(int, input().split())

print(hash(tuple(ans)))