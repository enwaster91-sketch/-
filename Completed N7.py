# Введення даних для першого моменту часу
h1 = int(input("Time 1 - hours: "))
m1 = int(input("Time 1 - minutes: "))
s1 = int(input("Time 1 - seconds: "))

# Введення даних для другого моменту часу
h2 = int(input("Time 2 - hours: "))
m2 = int(input("Time 2 - minutes: "))
s2 = int(input("Time 2 - seconds: "))

# Перерахунок обох значень у секунди
total_s1 = h1 * 3600 + m1 * 60 + s1
total_s2 = h2 * 3600 + m2 * 60 + s2

# Обчислення різниці (використовуємо abs для отримання додатної різниці)
difference = abs(total_s2 - total_s1)

print(f"Difference: {difference} seconds")
