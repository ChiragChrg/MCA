interface Employee {
    double calculateSalary();

    void displayDetails();
}

class Manager implements Employee {
    String name;
    double baseSalary;

    public Manager(String name, double baseSalary) {
        this.name = name;
        this.baseSalary = baseSalary;
    }

    public double calculateSalary() {
        return baseSalary;
    }

    public void displayDetails() {
        System.out.println("Name : " + name);
        System.out.println("Salary : " + calculateSalary());
    }
}

class Intern implements Employee {
    String name;
    int hoursWorked;
    float hourlyRate;

    public Intern(String name, int hoursWorked, float hourlyRate) {
        this.name = name;
        this.hoursWorked = hoursWorked;
        this.hourlyRate = hourlyRate;
    }

    public double calculateSalary() {
        return hoursWorked * hourlyRate;
    }

    public void displayDetails() {
        System.out.println("Name : " + name);
        System.out.println("Salary : " + calculateSalary());
    }
}

public class Interface {
    public static void main(String[] args) {
        Manager mngr = new Manager("John", 25000);
        Intern intrn = new Intern("Doe", 5, 700);

        mngr.displayDetails();
        intrn.displayDetails();
    }
}
