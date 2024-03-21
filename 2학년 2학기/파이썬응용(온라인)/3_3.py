import random
n1 = random.randint(2, 9)
n2 = random.randint(2, 9)
ans = n1*n2
user = 0
while ans != user :
    user = int(input("%d  * %d = " %(n1,n2)))

print("맞았습니다.")
