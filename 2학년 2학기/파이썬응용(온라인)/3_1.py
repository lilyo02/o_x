import random
num = random.randint(1, 99)
n10 = num//10
n1 = num%10

user = int(input("복권 번호를 입력하세요 : "))
print("당첨번호는 %d입니다." %num)
u10 = user//10
u1 = user%10

if num == user :
    print("상금은 100만원입니다.")
elif n10 == u10 or n10 == u1 or n1 == u10 or n1 == u1 :
    print("상금은 50만원입니다.")
else :
    print("상금은 없습니다.")
