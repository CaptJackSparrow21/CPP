import re
n = int(input())

invalid = ["++", "**", "??"]

for _ in range(n):
    pattern = input()

    if pattern == ".*+":
        print(False)
        continue
    
    if any(x in pattern for x in invalid):
        print("False")
        continue
    
    try:
        re.compile(pattern)
        print(True)
    except Exception:
        print(False)