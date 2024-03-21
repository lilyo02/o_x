import random
a = random.randint(1, 100)
b = random.randint(1, 100)
ans = a - b
result = int(input("%d - %d = " % (a, b)))

if ans == result :
    print("맞았습니다.")
else :
    print("틀렸습니다.")
