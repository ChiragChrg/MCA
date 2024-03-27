class Movie {
    String title, artist, director;
    double cost;

    public Movie(String title, String artist, String director, double cost) {
        this.title = title;
        this.artist = artist;
        this.director = director;
        this.cost = cost;
    }

    public void display() {
        System.out.println("Title : " + this.title);
        System.out.println("Artist : " + this.artist);
        System.out.println("Director : " + this.director);
        System.out.println("Production Cost : " + this.cost);
        System.out.println();
    }

    public double add(Movie film) {
        return this.cost + film.cost;
    }
}

public class MovieInfo {
    public static void main(String[] args) {
        Movie m1 = new Movie("Thor", "Marvel", "DC", 10000);
        Movie m2 = new Movie("Hulk", "Marvel", "DC", 20000);

        m1.display();
        m2.display();
        double total_cost = m1.add(m2);
        System.out.println("Total Production Cost : " + total_cost);
    }
}
