
import re

n = int(input())
css = ''.join(input() + '\n' for _ in range(n))

pattern = r'(?<!^)(?<=[: ])(#[0-9a-fA-F]{3}(?:[0-9a-fA-F]{3})?)(?=[^0-9a-fA-F])'

for color in re.findall(pattern, css, re.MULTILINE):
    print(color)
