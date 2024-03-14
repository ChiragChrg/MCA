// program to demonstrate the use of inheritance (Classes:Person and Student)

class Person {
    String name;
    int age;

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void displayInfo() {
        System.out.println("---Student Info---");
        System.out.println("Name : " + name);
        System.out.println("Age : " + age);
    }
}

class Student extends Person {
    int studentID;

    public Student(String name, int age, int studentID) {
        super(name, age);
        this.studentID = studentID;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Student ID : " + studentID);
    }
}

public class inheritance {
    public static void main(String[] args) {
        Person student1 = new Person("Chrg", 21);

        student1.displayInfo();
        System.out.println();

        Student student2 = new Student("Chirag", 22, 075);
        student2.displayInfo();
        System.out.println();
    }
}