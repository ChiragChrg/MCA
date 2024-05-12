import java.util.Scanner;

class MovieCl {
    String title, director, artist;
    double prodCost;

    public MovieCl(String title, String director, String artist, double prodCost) {
        this.title = title;
        this.director = director;
        this.artist = artist;
        this.prodCost = prodCost;
    }
}

public class Movie {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        MovieCl[] movies = new MovieCl[3];
        int count = 0;

        System.out.println("Enter the Movie Details, Enter \'stop\' to Stop execution");

        while (count < movies.length) {
            System.out.println("Enter the Title : ");
            String title = scan.nextLine();

            if (title.equalsIgnoreCase("stop"))
                break;

            System.out.println("Enter the Director : ");
            String director = scan.nextLine();
            if (!isAlpha(director))
                System.out.println("Error: Director must be String!");

            System.out.println("Enter the Artist : ");
            String artist = scan.nextLine();
            if (!isAlpha(artist))
                System.out.println("Error: Artist must be String!");

            double prodCost;
            while (true) {
                System.out.println("Enter the Production Cost : ");
                try {
                    prodCost = Double.parseDouble(scan.nextLine());
                    break;
                } catch (NumberFormatException e) {
                    System.out.println("Invalid Number Format!");
                }
            }

            movies[count] = new MovieCl(title, director, artist, prodCost);
            count++;
        }

        System.out.println("\n--- Movie Details ---\n");
        System.out.printf("%-20s%-20s%-20s%-20s\n", "Title", "Director", "Artist", "Production Cost");
        for (int i = 0; i < count; i++) {
            MovieCl movie = movies[i];
            System.out.printf("%-20s%-20s%-20s%-20.2f\n", movie.title, movie.director, movie.artist, movie.prodCost);
        }

        scan.close();
    }

    public static boolean isAlpha(String str) {
        return str.matches("[a-zA-Z\\s]+");
    }
}
