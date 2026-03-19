class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height

    def perimeter(self):
        return 2 * (self.width + self.height)

# Введення даних
w = float(input("Enter width: "))
h = float(input("Enter height: "))

# Створення об'єкта та обчислення
rect = Rectangle(w, h)

# Виведення результатів
print(f"Area: {rect.area():.2f}")
print(f"Perimeter: {rect.perimeter():.2f}")