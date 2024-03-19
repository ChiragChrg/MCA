// Program to demonstrate Passing objects & Returning object
// from the method (add 2 distance object)

class Distance {
    float km;
    float m;

    public Distance(float km, float m) {
        this.km = km;
        this.m = m;
    }

    void display() {
        System.out.println("Kilometers : " + km);
        System.out.println("Meters : " + m);
        System.out.println();
    }
}

public class AddDistance {
    public static void main(String[] args) {
        Distance dist1 = new Distance(2, 500);
        Distance dist2 = new Distance(4, 700);
        Distance dist3 = addDistance(dist1, dist2);

        System.out.println("-- Distance 1 --");
        dist1.display();
        System.out.println("-- Distance 2 --");
        dist2.display();
        System.out.println("-- Total Distance --");
        dist3.display();

    }

    static Distance addDistance(Distance d1, Distance d2) {
        float kilometer = d1.km + d2.km;
        float meter = d1.m + d2.m;

        if (meter >= 1000) {
            kilometer++;
            meter -= 1000;
        }
        return new Distance(kilometer, meter);
    }
}