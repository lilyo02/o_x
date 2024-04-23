from tkinter import*
'''
window = Tk()

label = Label(window,text="Hello World!")
label.pack()

label.mainloop()
'''
'''
def callback() :
    button["text"] = "버튼이 클릭되었음!"

window = Tk()

button = Button(window, text="클릭", command=callback)    # 클릭하면 callback 함수 작동
button.pack(side=LEFT)

window.mainloop()
'''
'''
window = Tk()

button = (Button, text="버튼을 클릭하세요")
button.pack()

button["fg"] = yellow
'''
'''
from tkinter import colorchooser

color = colorchooser.askcolor()
print(color)
'''
'''
def show() :
    print("이름 : %s\n 나이 : %s" %(e1.get(), e2.get()))

parent = Tk()
Label(parent, text="이름").grid(row=0)
Label(parent, text="나이").grid(row=1)

e1 = Entry(parent)
e2 = Entry(parent)

e1.grid(row=0, column=1)
e2.grid(row=1, column=1)

Button(parent, text='보이기', command=show).grid(row=3, column=1, sticky=W, pady=4)
# sticky=W :West, sticky=WE : 중앙정렬
Button(parent, text='종료', command=parent.quit).grid(row=3, column=0, sticky=W, pady=4)

mainloop()
'''
'''
from math import *

def calculate(event) :
    label.configure(text="결과 : " + str(eval(entry.get())))

window = Tk()

Label(window, text="파이썬 수식 입력 : ").pack()
entry = Entry(window)
entry.bind("<Return>", calculate)
entry.pack()

label = Label(window, text="결과 : ")
label.pack()

window.mainloop()
'''
'''
import random

window = Tk()

canvas = Canvas(window, width=300, height=200)
canvas.pack()

color = ["red", "blue", "yellow", "green"]
for degree in range(0, 360, 30) :
    canvas.create_arc(10, 10+degree//5, 200, 150+degree//5, extent=degree, style=ARC, outline=random.choice(color))

window.mainloop()
'''
import time

window = Tk()
canvas = Canvas(window, width=400, height=300)
canvas.pack()

id = canvas.create_oval(10, 100, 50, 150, fill="green")

for i in range(100) :
    canvas.move(id, 3, 0)   # id : 움직이고자 하는 객체, x방향으로 3
    window.update()         # 화면 새로 그리기
    time.sleep(0.02)
