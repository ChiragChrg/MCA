// Program to demonstrate Passing & Returning object 
// from the method (add 2 distance object)

class Distance {
    float addDistance(float X, float Y) {
        return X + Y;
    }
}

public class PassReturn {
    static float result;

    public static void main(String[] args) {
        Distance dist = new Distance();
        result = dist.addDistance(25, 35);

        System.out.println("Total distance is : " + result);
    }
}
