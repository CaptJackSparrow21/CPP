for _ in range(int(input())) :
    s = input()

    if (len(s) == 10 and
        len(set(s)) == 10 and
        sum(c.isupper() for c in s) >= 2 and
        sum(c.isdigit() for c in s) >= 3 and
        s.isalnum()) :
        print("Valid")
    else :
        print("Invalid")