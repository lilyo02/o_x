'''
1. 온도변환
ftemp = 90.0
ctemp = (ftemp-32.0)*5.0/9.0
print(ctemp)

2. 터틀 그래픽 _근데 커서가 화살표인..
import turtle
t = turtle.Pen() # or t = turtle.Turtle()
t.pencolor("red")
t.forward(100)
t.right(90)
t.forward(100)
t.right(90)
t.forward(100)
t.right(90)
t.forward(100)

# 위에 내용을 반복문으로
import turtle
t = turtle.Turtle()
for i in [0, 1, 2, 3] :
    t.forward(50)
    t.right(90)
    
import turtle
t = turtle.Turtle()
t.shape("turtle")
for i in [0, 1, 2, 3, 4] :
    t.forward(50)
    t.right(144)

import turtle
turtle.circle(100)
turtle.circle(100, steps=3)

import turtle
radius = int(input("반지름 : "))
length = int(input("진행 : "))
turtle.shape("turtle")
turtle.forward(length)
turtle.circle(radius)
turtle.forward(length)
turtle.circle(radius)
turtle.forward(length)
turtle.circle(radius)
turtle.forward(length)

3. 단순 계산
number = int(input("참석자의 수를 입력하시오 : "))
chickens = number
beers = number*2
cakes = number*4
print("치킨의 수 : ", chickens)
print("맥주의 수 : ", beers)
print("케익의 수 : ", cakes)

myMoney = 5000
candyPrice = 120
# 최대한 살 수 있는 사탕 수
numCandies = myMoney//candyPrice
print(numCandies)
# 최대한 사탕을 구입하고 남은 돈
change = myMoney % candyPrice
print(change)

4. 화재경보기 작동하기

'''
import turtle as t

color_status = ["white", "blue", "red"]
alert_status = ["정상", "주의", "화재"]
tempc = 50

def check_fire() :
    if tempc < 80 :
        status = 0
    elif tempc < 120 :
        status = 1
    else :
        status = 2
        
    t.clear() # 그린 그림 지우기, 커서는 그대로
    t.home() # 커서 원위치
    t.pendown()
    t.fillcolor(color_status[status]) #도형 안을 채우는 색 지정, 색 채우기 X
    t.begin_fill() # 색 채우기 준비
    t.circle(20)
    t.end_fill() # 색 채우고 종료
    t.penup()
    t.goto(-22, 50)
    t.write("%s : %d" %(alert_status[status], tempc))
            
def keyUp () :
    global tempc
    
    if tempc < 80 :
        tempc += 5
    else :
        tempc += 10

    check_fire()

def keyDown() :
    global tempc
    
    if tempc < 80 :
        tempc -= 5
    else :
        tempc -= 10

    check_fire()

t.setup(300, 300)
s = t.Screen()
t.hideturtle() # 커서 안보이게 하기
t.speed(0) # 화면에 움직임 표현 속도 지정
check_fire()
# 이게 방향키 누르면 어떤 함수를 하라는 것 같은데
# 대충 s = t.Screen() 이었으니까 그 스크린 안에 구동을 s에 하는 것 같고
# s.onkey(함수명, 방향키명) 
s.onkey(keyUp, "Up")
s.onkey(keyDown, "Down")
s.onkey(s.bye, "q")
s.listen()
