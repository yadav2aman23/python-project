def calculate_average(marks):
    return sum(marks) / len(marks)

def get_grade(marks):
    if marks >=90:
        return "A"
    elif marks >=75:
        return "B"
    elif marks >=50:
        return "C"
    elif marks >=33:
        return "D"
    else:
        return "F"

marks = []

print("Enter marks of 5 studnet")

for i in range(5):
    mark = int(input(f"student {i + 1}:"))
    marks.append(mark)

update_marks=list(
    map(lambda x: min(x +5 ,100),marks)
)

grades = list (
    map(lambda x: get_grade(x),update_marks)
)

average=calculate_average(update_marks)

print("\n -------retult -------")

print("original marks: ",marks)

print("after grace marks :", update_marks)

print("Grades:")

for i in range(5):
    print(f"student {i+1}:{grades[i]}")

print("class Average: " ,average)