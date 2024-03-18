// Program to demonstrate use of Multilevel inheritance
// use class : Box, BoxWeight, BoxShipment

class Box {
    void dimensions() {
        System.out.println("-- Box Dimensions --");
        System.out.println("Length: 5 feet");
        System.out.println("Width: 3 feet");
        System.out.println("Height: 2 feet");
        System.out.println();
    }
}

class BoxWeight extends Box {
    void weight() {
        System.out.println("-- Box Weight --");
        System.out.println("Weight: 45 KG");
        System.out.println();
    }
}

class BoxShipment extends BoxWeight {
    void destination() {
        System.out.println("-- Box Destination --");
        System.out.println("Shipment to Tokyo");
        System.out.println();
    }
}

public class Multilevel {
    public static void main(String[] args) {
        BoxShipment box = new BoxShipment();

        box.dimensions();
        box.weight();
        box.destination();
    }
}
