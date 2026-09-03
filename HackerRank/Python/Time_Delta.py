from datetime import datetime

def time_delta(t1, t2) :
    t1 = datetime.strptime(t1, "%a %d %b %Y %H:%M:%S %z")
    t2 = datetime.strptime(t2, "%a %d %b %Y %H:%M:%S %z")

    diff = t1 - t2
    seconds = diff.total_seconds()

    return str(int(abs(seconds)))

if __name__ == '__main__' :
    t = int(input())

    for _ in range(t) :
        t1 = input()
        t2 = input()
        print(time_delta(t1, t2))