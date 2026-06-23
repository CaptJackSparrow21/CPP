import sys
input = sys.stdin.readline
import math
from math import *

n = int(input())

student_marks = {}

for _ in range(n) :
    name, *line = input().split()
    scores = list(map(float, line))
    student_marks[name] = scores

query_name = input().strip()

avg = sum(student_marks[query_name]) / len(student_marks[query_name])

print(f"{avg:.2f}")