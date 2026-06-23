import sys
input = sys.stdin.readline
import math
from math import *


n = int(input())

students = []

for _ in range(n) :
    name = input()
    score = float(input())
    students.append([name, score])

second_lowest = sorted(set(score for name, score in students))[1]

ans = []

for name, score in students :
    if score == second_lowest :
        ans.append(name)

for name in sorted(ans) :
    print(name, end = "")
