# import sys
# input = sys.stdin.readline
# import math
# from math import *

# n = int(input())

# if n % 4 == 0 :
#     if n % 400 == 0 :
#         print("True")

# print("False")

def is_leap(year):
    leap = False
    
    if year % 400 == 0 :
        leap = True
    elif year % 100 == 0 :
        leap = False
    elif year % 4 == 0 :
        leap = True
    else :
        leap = False
    
    return leap

year = int(input())
print(is_leap(year))