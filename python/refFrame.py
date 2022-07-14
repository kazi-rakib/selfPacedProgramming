import turtle

# initialization
x = turtle.Turtle()
y = turtle.Turtle()
z = turtle.Turtle()

length = 500

# set position
x.setpos(0, 0)
y.setpos(0, 0)
z.setpos(0, 0)

# set shape
x.shape("triangle")
y.shape("triangle")
z.shape("triangle")

# set speed
x.speed(5)
y.speed(5)
z.speed(5)

# mark position
x.dot()
y.dot()
z.dot()

# set color
x.color("#aa0000")
y.color("#00aa00")
z.color("#0000aa")

# set scale
x.forward(length)

y.left(90)
y.forward(length)

z.right(90+45)
z.forward(length)

# exiting
turtle.exitonclick()