students = []
for i in range(1, 4):
    name = input(f"Student {i} - name: ")
    grade = int(input(f"Student {i} - grade: "))
    students.append({"name": name, "grade": grade})

# Знаходимо студента з максимальним балом
best_student = students[0]
for student in students:
    if student["grade"] > best_student["grade"]:
        best_student = student

print(f"\nBest student: {best_student
