class Circle():
    pi = 3.14

    def __init__(self,radius=1):
        self.radius = radius
        self.area = radius * self.radius * Circle.pi

    def get_data(self):
        return self.radius * Circle.pi *2


my_circle = Circle(5)
print(my_circle.radius)
print(my_circle.pi)
print(my_circle.get_data())
