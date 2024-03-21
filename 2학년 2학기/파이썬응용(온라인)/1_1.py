import turtle as t
t.shape("turtle")
t.color("blue")

radius=int(input("반지름을 입력하세요:"))
t.up()
t.goto(0,0)
t.down()
t.circle(radius)

radius=radius+20
t.up()
t.goto(100,0)
t.down()
t.circle(radius)

radius=radius+20
t.up()
t.goto(200,0)
t.down()
t.circle(radius)
