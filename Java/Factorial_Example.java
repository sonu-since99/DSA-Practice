import java.util.Scanner; 
// Import Scanner class from java.util package → used to take user input

public class Factorial_Example { 
// Define a class named FactorialExample → Java program must be inside a class

    public static void main(String[] args) { 
    // main() is the starting point of program execution
    // static → allows execution without creating object
    // String[] args → used to take command line arguments

        Scanner sc = new Scanner(System.in); 
        // Create Scanner object 'sc' → used to read input from keyboard

        int number = sc.nextInt(); 
        // Take integer input from user and store in variable 'number'

        long factorial = 1; 
        // Declare variable factorial and initialize with 1
        // long is used because factorial values become very large

        for (int i = 1; i <= number; i++) { 
        // Loop from 1 to 'number'
        // i starts from 1 and increases by 1 until it reaches 'number'

            factorial *= i; 
            // Multiply factorial by i
            // Same as: factorial = factorial * i
        }

        System.out.println("Factorial of " + number + " is: " + factorial); 
        // Print result on screen

        sc.close(); 
        // Close Scanner object → good practice to free memory
    }
}

/* To run in terminal
write : javac Factorial_Example.java
    here javac is the Java compiler, Factorial_Example.java is the source file

then : java Factorial_Example
here java Factorial_Example runs the compiled program
*/