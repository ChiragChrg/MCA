class Distance {
    float feet;
    float inches;

    public Distance(float feet, float inches) {
        this.feet = feet;
        this.inches = inches;
    }

    void display() {
        System.out.println("Feet : " + feet);
        System.out.println("Inches : " + inches);
        System.out.println();
    }

    public Distance add(Distance dist) {
        float ft = this.feet + dist.feet;
        float in = this.inches + dist.inches;

        if (in >= 12) {
            ft++;
            in -= 12;
        }
        return new Distance(ft, in);
    }
}

public class AddDistance2 {
    public static void main(String[] args) {
        Distance d1 = new Distance(2, 11);
        Distance d2 = new Distance(4, 5);

        System.out.println("-- Distance 1 --");
        d1.display();
        System.out.println("-- Distance 2 --");
        d2.display();
        Distance d3 = d1.add(d2);
        System.out.println("-- Total Distance --");
        d3.display();

    }
}