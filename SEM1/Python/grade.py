# Program to enter 2 student details; Add 3 subjects, find Total & Grade of Student's marks

N = 1
student = []
for i in range(N):
    print("\n---| Student ",i+1," Details |---")
    regno = str(input("Enter your Registration No : "))
    name = str(input("Enter your Name : "))
    m1 = int(input("Enter Marks in Subject 1 (out of 100): "))
    m2 = int(input("Enter Marks in Subject 2 (out of 100): "))
    m3 = int(input("Enter Marks in Subject 3 (out of 100): "))
    
    total = m1 + m2 + m3;
    percent = (total * 100) / 300
    
    if m1<35 or m2<35 or m3<35:
        grade = "F"
    elif percent < 35:
        grade = "F"
    elif percent >= 35 and percent <50:
        grade = "D"
    elif percent >= 50 and percent <60:
        grade = "C"
    elif percent >= 60 and percent <80:
        grade = "B"
    elif percent >= 80:
        grade = "A"
        
    student.append({
        "regno":regno,
        "name":name,
        "m1":m1,
        "m2":m2,
        "m3":m3,
        "total":total,
        "percent":percent,
        "grade":grade
    })
    
for stud in student:
    print("\nStudent Regno : ",stud['regno'])
    print("Student Name : ",stud['regno'])
    print("Marks in Subject 1 : ",stud['m1'])
    print("Marks in Subject 2 : ",stud['m2'])
    print("Marks in Subject 3 : ",stud['m3'])
    print("Total Marks : ",stud['total'])
    print("Percentage : ",stud['percent'])
    print("Grade : ",stud['grade'])