import java.util.Scanner;

class Rectangles {
    private double length;
    private double width;

    public Rectangles() {
    }

    public Rectangles(double length, double width) {
        this.length = length;
        this.width = width;
    }

    public void getInput(Scanner scanner) {
        System.out.print("Enter length: ");
        length = scanner.nextDouble();
        System.out.print("Enter width: ");
        width = scanner.nextDouble();
    }

    public double calculateArea() {
        return length * width;
    }

    public double calculatePerimeter() {
        return 2 * (length + width);
    }

    public void printdisplay() {
        System.out.printf("Area: %.2f\n", calculateArea());
        System.out.printf("Perimeter: %.2f\n", calculatePerimeter());
    }
}


public class Main2 {
    public static void main(String[] args) {
        Rectangles r = new Rectangles();
        Scanner scanner = new Scanner(System.in); {
            r.getInput(scanner);
            r.printdisplay();
            
            scanner.close();
        }
    }
}