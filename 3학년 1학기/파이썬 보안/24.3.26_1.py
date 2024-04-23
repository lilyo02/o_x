#함수를 선언하는 키워드 def 함수이름 (매개변수1, 매개변수2):
#예제
# def get_sum(start,end):
#     sum=0
#     for i in range(start, end+1):
#             sum += i
#     return sum

# print(get_sum(1,10)) 1은 start가 end는 10이 받음
# print(get_sum(1,20)) 

# def power(x,y): 연산자 함수
#     result = 1
#     for i in range(y):
#                 result = result * x
#     return result

# print(power(10,2))  

#랩문제 : 소수를 판별하는 함수 is_prime()을 작성하여 사용하여 보자. 
# def is_prime(n):
#     for i in range(2,n):
#         if(n%i==0):
#             return False
#     return True

# n = int(input("정수를 입력하세요:"))
# print(is_prime(n))                     '

#랩문제 2 일화용 패스워드 생성기 사용하기
# import random

# def genPass():
#         alphabet = "abcdefghyzklmnopgrstuvwxyz0123456789"
#         password = ""

#         for i in range(6):
#             index = random.randrange(len(alphabet))
#             password = password + alphabet
#         return password

# print(genPass())
# print(genPass()) 
# print(genPass())       

# 디폴트 변수 함수의 매개변수가 기본값을 가질 수 있는걸 디폴트 함수라고 험
# def greet(name, msg="별일없죠?"):
#   print("안녕",name+,''+msg)

#greet("영희")

#랩 온도변화기 (섭씨 온도를 화씨 온도로 또 그 반대로 변환하는 프로그램을 작성) c,f,q 중 하나 선택 
#c는 섭씨에서 화씨온도로
#f는 화씨온도에서 섭씨온도로
#q는 종료

# def printOptions():
#     print("'c'섭씨온도에서 화씨온도로 변환")
#     print("'f'화씨온도에서 섭씨온도로 변환")
#     print("'q'종료")

# def C2F(c_temp):
#     return 9.0 / 5.0 * c_temp + 32

# def F2C(f_temp):
#     return (f_temp - 32.0) * 5.0 / 9.0

# printOptions()
# choice = input("메뉴에서 선택하세요.")
# while choice != "q":
#     if choice == "c":
#         temp = float(input("섭씨온도:"))
#         print("화씨온도:",C2F(temp))
#     elif choice == "f":
#         temp = float(input("화씨온도:"))
#         print("섭씨온도:", F2C(temp))
#     printOptions()
#     choice = input("메뉴에서 선택하세요.")

# def sub():
#         return 1, 2, 3,

# a, b, c = sub()
# print(a, b, c)

# #무명함수 
# lambda 인수1, 인수2 : 수식

# sum = lambda x,y : x+y;

# print("정수의 합 : ", sum(10,20))
# print("정수의 합 : ", sum(20,20))

#숫자입력 후 -1이 나오면 종료되는 프로그램
# def readList():
#         nlist = []
#         flag = True;
#         while flag:
#                     number = int(input("숫지를 입력하시오:"))
#                     if number < 0:
#                             flag = False
#                     else:
#                             nlist.append(number)
#         return nlist

# def processList(nlist):
#         nlist.sort()
#         return nlist

# def printList(nlist):
#         for i in nlist:
#                 print("성적:",i)

# def main():
#         nlist = readList()
#         processList(nlist)
#         printList

# if __name__ == "__main__":
#     main()

#실습예제 
# import turtle as t

# def write_xy(x,y):
#     t.goto(x,y)
#     t.stamp()
#     t.write("x:%d, y:%d"%(x,y))

# def screen_clear(x,y):
#     t.goto(x,y)
#     t.clear()

# t.setup(600,600)
# s = t.Screen() 
# t.penup()

# s.onscreenclick(write_xy, 1)
# s.onscreenclick(screen_clear, 3)
# s.listen()

#예제 dna염기서열의 순서 바꾸기

def comp(seq):
    comp_dice = {'A':'T', 'T':'A', 'C':'G', 'G':'C'}
    seq_comp = ""
    for char in seq:
        if char in comp_dict:
            seq_comp += comp_dict[char]
        else:
            seq_comp += '?'
    return seq_comp

def rev(seq):
    seq_rev = "".join(reversed(seq))
    return seq_rev

def rev_comp(seq):
    tmp = comp(seq)
    return rev(tmp)

src = input("DNA sequence : ")
cnvt = int(input("1(comp),2(Rev), 3(Rev_Comp):"))
if (cnvt >= 1 and cnvt <= 3):
    if (cnvt == 1):
        rst = comp(src)
    elif (cnvt == 2):
        rst = rev(src)
    else:
        rst = rev_comp(src)
    print(src, "->", rst)
else:
    print("1(comp),2(Rev),3(Rev_Comp)!!")
    