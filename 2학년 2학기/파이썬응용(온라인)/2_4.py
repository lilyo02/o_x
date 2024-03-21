a=int(input("a값 입력 : "))
b=int(input("b값 입력 : "))
c=int(input("c값 입력 : "))

d=b**2-4*a*c
if d>0:
    print("방정식의 근은 서로 다른 두 실근입니다")
elif d==0:
    print("방정식의 근은 서로 같은 중근입니다")
else:
    print("방정식의 근은 허근입니다")
