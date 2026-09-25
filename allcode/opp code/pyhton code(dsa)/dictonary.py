#student={"name":"Aman","age":45,"Grade":"A"}
##print(student)
##print(student["name"])
##print(student["age"])

##print(student.get("name"))
##print(student.get("name_null","kumar"))


##student["name"]="yadav"
##print(student)

##keys=student.keys()
##print(keys)

##values=student.values()
##print(values)

##iteam=student.items()
##print(iteam)


'''for keys in student.keys():
    print(keys)

for items in student.items():
    print(items)'''


'''for keys,values in student.items():
    print(f"{keys}:{values}")'''



students={
    "student1":{"name":"Aman","rollno":4585,"age":45},
    "student2":{"name":"Kumar","rollno":452,"age":963}
}
#print(students)


for student_id,student_info in students.items():
    print(f"{student_id}:{student_info}")
    for keys,values in student_info.items():
        print(f"{keys}:{values}")