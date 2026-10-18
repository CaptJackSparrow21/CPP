import re
import email.utils

pattern = r'[a-zA-Z][a-zA-Z0-9._-]*@[a-zA-Z]+\.[a-zA-Z]{1,3}'

for _ in range(int(input())) :
    line = input()
    name, address = email.utils.parseaddr(line)

    if re.fullmatch(pattern, address) :
        print(email.utils.formataddr((name, address)))