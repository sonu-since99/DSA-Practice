import java.util.Scanner;
public class FactorialExample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        

        int number = sc.nextInt(); // The number to calculate

        long factorial = 1; // Use 'long' because factorials grow very large

        for (int i = 1; i <= number; i++) {
            factorial *= i; // Same as: factorial = factorial * i
        }

        System.out.println("Factorial of " + number + " is: " + factorial);
        sc.close();
    }
}