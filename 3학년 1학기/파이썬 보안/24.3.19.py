'''
import turtle
t = turtle.Pen()

while True:
    direction = input("왼쪽 = left, 오른쪽 = right : ")
    if direction == "left" :
        t.left(60)
        t.forward(50)
        
    if direction == "right" :
        t.right(60)
        t.forward(50)


total_sales= int(input("구입 금액을 입력하시오 : "))

if total_sales >= 100000 :
    discount = total_sales * 0.05
    total_sales -= discount
    
print("지불 금액은 ", total_sales, " 입니다.")


str = input("문자열을 입력하시오 : ")
length = len(str)

if length % 2 == 1 :
    ch1 = str[length//2]
    print("중앙글자는 ", ch1)
else :
    ch1 = str[length//2-1]
    ch2 = str[length//2]
    print("중앙글자는 ", ch1, ch2)


credits = float(input("이수한 학점을 입력하시오 : "))
gpa = float(input("평점을 입력하시오 : "))

if credits >= 140 and gpa >= 2.0 :
    print("졸업 가능합니다!")
else :
    print("졸업이 힘듭니다!")


score = int(input("성적을 입력하시오 : "))

if score >= 90 :
    print("학점 A")
elif score >= 80 :
    print("학점 B")
elif score >= 70 :
    print("학점 C")
elif score >= 60 :
    print("학점 D")
else :
    print("학점 F")

    
user_list = ['김철수', '홍길동', '김영희']

name = input('아이디를 입력하시오 : ')

if name in user_list :
    password = input('패스워드를 입력하시오 : ')
    if password == '12345678' :
        print('환영합니다.')
    else :
        print('잘못된 패스워드입니다.')
else :
    print('알 수 없는 사용자입니다!')


year = int(input("연도를 입력하시오 : "))

if ((year % 4 == 0 and year % 100 != 0) or year % 4000 == 0) :
    print(year, "년은 윤년입니다.")
else :
    print(year, "년은 윤년이 아닙니다.")


import math

A = float(input("A = "))
B = float(input("B = "))
C = float(input("C = "))

D = B*B - 4*A*C

if A == 0 :
    print("x = ", -C/B)

if D == 0 :
    print("x = ", -B/(2.0 * A))
elif D > 0 :
    print("x1 = ", (-B + math.sqrt(D)) / (2.0 * A))
    print("x2 = ", (-B - math.sqrt(D)) / (2.0 * A))
else :
    print("실근이 존재하지 않음")


ph = int(input("ph : "))

if ph >= 0 and ph <= 4 :
    print("강산성")
elif ph >= 5 and ph <= 6:
    print("약산성")
elif ph == 7 :
    print("중성")
elif ph >= 8 and ph <= 9:
    print("약염기성")
else :
    print("강염기성")


h = int(input("키(cm) : "))
w = int(input("몸무게(kg) : "))

h = h * 0.01

BMI = w / (h*h)

if BMI < 18.5 :
    print("저체중")
elif BMI >= 18.5 and BMI < 23 :
    print("정상")
elif BMI >= 23 and BMI < 25 :
    print("과체중")
elif BMI >= 25 and BMI < 30 :
    print("경도비만")
elif BMI >= 30 and BMI < 35 :
    print("중등도비만")
else :
    print("고도비만")


sum = 0

for x in range(10) :
# range 괄호 안에 (0, 10) 이런 식으로 앞에 시작 번호도 부여해줄 수 있음
    sum += x

print(sum)


# 반복을 이용한 정수 합 프로그램
sum = 0

limit = int(input("어디까지 계산할까요 : "))
for i in range(1, limit+1) :
    sum += i

print("1부터", limit, "까지의 정수의 합")


# 반복을 이용한 팩토리얼 구하기
fact = 1.0

n = int(input("정수를 입력하시오 : "))

for i in range(1, n+1) :
    fact *= i;

print(n, "!은", fact, "이다.")


import math
import turtle

t = turtle.Turtle()

t.pendown()

for angle in range(360) :
    y = math.sin(math.radians(angle))
    scaledX = angle
    scaledY = y * 100
    print(scaledX, scaledY)
    t.goto(scaledX, scaledY)

t.penup()


# while 문을 이용한 성적의 평균 구하기 프로그램
# 필요한 변수들을 초기화한다
n = 0
sum = 0
score = 0

print("종료하려면 음수를 입력하시오")

# grade가 0이면 반복
# 성적을 입력받아서 합계를 구하고 학생 수를 센다

while score >= 0 :
    score = int(input("성적을 입력하시오 : "))
    if score > 0 :
        sum = sum + score
        n = n + 1

# 평균을 계산하고 화면에 출력한다
if n > 0 :
    average = sum / n

print("성적의 평균은 %f입니다.", %average)


for y in range(5) :
    for x in range(10) :
        print("*", end="")
    print("")


s = input("문자열을 입력하시오 : ")
vowels = "aeiouAEIOU"
result = ""

for letter in s :
    if letter not in vowels :
        result += letter

print(result)


h = 1
cnt = 0
while True :
    h *= 2
    cnt += 1
    print(cnt, "번 접으면", h, "mm")
    if h > 100000 :
        break
    
print("횟수 : ", cnt, " 두께 : ", h)
'''
