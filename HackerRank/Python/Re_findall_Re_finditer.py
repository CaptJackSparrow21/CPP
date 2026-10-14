import re
s = input()

pattern = r'(?<=[qwrtypsdfghjklzxcvbnm])([aeiou]{2,}(?=[qwrtypsdfghjklzxcvbnm])'
result = re.findall(pattern, s, re.IGNORECASE)
print(*result, sep = '\n') if result else print(-1)
