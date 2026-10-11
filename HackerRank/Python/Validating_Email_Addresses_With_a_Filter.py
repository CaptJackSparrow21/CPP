def fun(s) :
    import re
    return bool(re.fullmatch(r'[A-Za-z0-9_-]+@[A-Za-z0-9]+\.[A-Za-z]{1,3}', s))

def filter_mail(emails):
    return list(filter(fun, emails))

if __name__ == '__main__' :
    n = int(input())
    emails = [input() for _ in range(n)]

    filtered_emails = filter_mail(emails)
    filtered_emails.sort()
    print(filtered_emails)