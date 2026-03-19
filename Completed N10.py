# Зчитуємо дані для першого прямокутника
w1 = float(input("Rectangle 1 - width: "))
h1 = float(input("Rectangle 1 - height: "))

# Зчитуємо дані для другого прямокутника
w2 = float(input("Rectangle 2 - width: "))
h2 = float(input("Rectangle 2 - height: "))

# Обчислюємо площі
area1 = w1 * h1
area2 = w2 * h2

# Порівнюємо та виводимо результат
if area1 > area2:
    print(f"Rectangle 1 is larger (area: {area1:.2f})")
elif area2 > area1:
    print(f"Rectangle 2 is larger (area: {area2:.2f})")
else:
    print(f"Both rectangles have the same area (area: {area1:.2f})")
