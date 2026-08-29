import sys
input = sys.stdin.readline
import math
from math import *
from itertools import product

a = list(map(int, input().split()))
b = list(map(int, input().split()))

print(*product(a, b))
