import sys
input = sys.stdin.readline
import math
from math import *

n = int(input())

arr = map(int, input().split())
print(sorted(set(arr))[-2])