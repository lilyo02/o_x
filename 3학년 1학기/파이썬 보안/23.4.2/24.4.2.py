'''
scores = []
for i in range(10) :
    scores.append(int(input("성적을 입력하시오 : ")))

print(scores)


scores = [32, 56, 64, 72, 12, 37, 98, 77, 59, 69]

for element in scores :
    print(element)

# 파이썬의 리스트는 다 섞여도 가능.. 리스트 안에 리스트도 가능함


STUDENTS = 5

scores = []
scoreSum = 0

for i in range(STUDENTS) :
    value = int(input("성적을 입력하시오 : "))
    scores.append(value)
    scoreSum += value

scoreAvg = scoreSum / len(scores)

highScoreStudents = 0
for i in range(len(scores)) :
    if scores[i] >= 80 :
        highScoreStudents += 1

print("성적 평균은 ", scoreAvg, "입니다.")
print("80점 이상 성적을 받은 학생은 ", highScoreStudents, "명 입니다.")


# 시퀀스 : 순서를 가진 요소들의 집합


text = "Will is power."
print(text[0], text[3], text[-1])

flist = ["apple", "banana", "tomato", "peach", "pear"]
print(flist[0], flist[3], flist[-1])


# 튜플 & 리스트 매우 흡사
# but, 튜플 - (), 값을 변경할 수 없음? 리스트 - [], 값을 변경할 수 있음

heroes = ["스파이더맨", "슈퍼맨", "헐크", "아이언맨", "배트맨"]
heroes.pop(1) # pop은 인덱스 번호를,
heroes.remove("헐크") # remove는 요소 자체를 써야 삭제된다.


a = [3, 2, 1, 5, 4]
a.sort()
print(a)

b = sorted(a)
print(b)


menu = 0
friends = []

while menu != 9 :
    print("---------------")

    
    print("1. 친구 리스트 출력")
    print("2. 친구추가")
    print("3. 친구삭제")
    print("4. 이름변경")
    print("9. 종료")
    menu = int(input("메뉴를 선택하시오 : "))

    if menu == 1 :
        print(friends)
    elif menu == 2 :
        name = input("이름을 입력하시오 : ")
        friends.append(name)
    elif menu == 3 :
        del_name = input("삭제하고 싶은 이름을 입력하시오 : ")
        if del_name in friends :
            friends.remove(del_name)
        else :
            print("이름이 발견되지 않았음")
    elif menu == 4 :
        old_name = input("변경하고 싶은 이름을 입력하시오 : ")
        if old_name in friends :
            index = friends.index(old_name)
            new_name = input("새로운 이름을 입력하시오 : ")
            friends[index] = new_name
        else :
            print("이름이 발견되지 않았음")


board = [[''for x in range (3)]for y in range(3)]
while True :
    # 게임 보드 그린다
    for r in range(3):
        print("   " + board[r][0] + "|   " + board[r][1] + "|  "
                                        +board[r][2])
        if (r != 2):
            print("---|---|---")

    # 사용자로부터 좌표를 입력받는다
    x = int(input("다음 수의 x 좌표를 입력하시오: "))
    y = int(input("다음 수의 y 좌표를 입력하시오: "))

    # 사용자가 입력한 좌표를 검사한다
    if board[x][y] != '':
        print("잘못된 위치입니다.")
        continue
    else:
        board[x][y] = 'X'

    # 컴퓨터가 놓을 위치를 결정한다
    # 첫 번쨰로 발견하는 비어있는 칸에 놓는다
    done = False
    for i in range(3):
        for j in range(3):
            if board[i][j] == ''and not done:
                board[i][j] = 'O';
                done = True
                break
                

name = ["홍길동", "임꺽정"]
subject = ["국어", "영어", "수학"]

for i in range(2) :
    for j in range(3) :
        print(name[i] + " " + subject[j])
'''


# 7세그먼트

import turtle as t

s7seg_img = ["7s0.gif", "7s1.gif", "7s2.gif", "7s3.gif", "7s4.gif",
             "7s5.gif", "7s6.gif", "7s7.gif", "7s8.gif", "7s9.gif", "7s10.gif"]

def disp_num(k) :
    t.shape(s7seg_img[k])
    t.stamp()

def key_0() :
    disp_num(0)

def key_1() :
    disp_num(1)

def key_2() :
    disp_num(2)

def key_3() :
    disp_num(3)

def key_4() :
    disp_num(4)

def key_5() :
    disp_num(5)

def key_6() :
    disp_num(6)

def key_7() :
    disp_num(7)

def key_8() :
    disp_num(8)

def key_9() :
    disp_num(9)

def key_10() :
    disp_num(10)

t.setup(400, 400)
s = t.Screen()
t.hideturtle()
t.speed()

for i in range(11) :
    s.addshape(s7seg_img[i])

disp_num(10)

s.onkey(key_0, "0")
s.onkey(key_1, "1")
s.onkey(key_2, "2")
s.onkey(key_3, "3")
s.onkey(key_4, "4")
s.onkey(key_5, "5")
s.onkey(key_6, "6")
s.onkey(key_7, "7")
s.onkey(key_8, "8")
s.onkey(key_9, "9")
s.onkey(key_10, "r")

s.listen()
