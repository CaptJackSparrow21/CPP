t = int(input())

for _ in range(t) :
    s = input()

    if s[0] in "+-" :
        s = s[1:]

    if s.count('.') == 1 :
        left, right = s.split('.')

        if(left.isdigit() or left == '') and right.isdigit() :
            print(True)
        else :
            print(False)

    else :
        print(False)