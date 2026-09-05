import math

ab = int(input())
bc = int(input())

angle = math.degrees(math.atan(ab/bc))

print(round(angle), chr(176), sep="")