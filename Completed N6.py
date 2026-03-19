import math

# Зчитування координат
x1 = float(input("Point 1 - Enter x: "))
y1 = float(input("Point 1 - Enter y: "))
x2 = float(input("Point 2 - Enter x: "))
y2 = float(input("Point 2 - Enter y: "))

# Обчислення відстані
distance = math.sqrt((x2 - x1)**2 + (y2 - y1)**2)

# Виведення результату з точністю до 2 знаків
print(f"Distance: {distance:.2f}")