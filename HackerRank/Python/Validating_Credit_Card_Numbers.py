import re

pattern = re.compile(r"^(?!.*(\d)(-?\1){3})[456]\d{3}(?:-?\d{4}){3}$")

for _ in range(int(input())) :
    s = input()
    print("Valid" if pattern.fullmatch(s) else "Invalid")