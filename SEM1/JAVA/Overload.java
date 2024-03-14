// Program to demonstrate overloaded constructors and use of this
// keyword (Class: Student, data: Name, Regno, College, Course, Gpa).

class Student {
    String name;
    String college;
    String course;
    int regno;
    double gpa;

    public Student() {
        this.name = "Unknown";
        this.regno = 0;
        this.college = "Unknown";
        this.course = "Unknown";
        this.gpa = 0.0;
    }

    public Student(String name, int regno) {
        this();
        this.name = name;
        this.regno = regno;
    }

    public Student(String name, int regno, String college, String course, double gpa) {
        this(name, regno);
        this.college = college;
        this.course = course;
        this.gpa = gpa;
    }

    public void displayInfo() {
        System.out.println("--- Student Details ---");
        System.out.println("Name : " + name);
        System.out.println("Register No : " + regno);
        System.out.println("College : " + college);
        System.out.println("Course : " + course);
        System.out.println("GPA : " + gpa);
        System.out.println();
    }
}

public class Overload {
    public static void main(String[] args) {
        Student student1 = new Student();
        Student student2 = new Student("Chrg", 075);
        Student student3 = new Student("Chirag", 075, "AIMIT", "MCA", 4.5);

        student1.displayInfo();
        student2.displayInfo();
        student3.displayInfo();
    }
}