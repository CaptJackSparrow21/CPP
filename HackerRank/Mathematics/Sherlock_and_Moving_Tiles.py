#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'movingTiles' function below.
#
# The function is expected to return a DOUBLE_ARRAY.
# The function accepts following parameters:
#  1. INTEGER l
#  2. INTEGER s1
#  3. INTEGER s2
#  4. INTEGER_ARRAY queries
#

def movingTiles(l, s1, s2, queries):
    ans = []

    for area in queries :
        time = math.sqrt(2) * (l - math.sqrt(area)) / abs(s1 - s2)
        ans.append(time)

    return ans


if __name__ == '__main__':
    l, s1, s2 = map(int, input().split())

    q = int(input())

    queries = [int(input()) for _ in range(q)]

    result = movingTiles(l, s1, s2, queries)

    for x in result:
        print(f"{x:.4f}")

