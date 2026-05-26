import java.util.Scanner;
public class W01_P2 { 
   public static void main(String[] args) {
       double width ;
       double height;

       Scanner in = new Scanner(System.in);
       width = in.nextDouble();
       height = in.nextDouble();
// Calculate the perimeter of the rectangle
//double perimeter = 2 * (height + width);

// Calculate the area of the rectangle
//double area = width * height;
// Print the calculated perimeter using placeholders for values
       System.out.println("Perimeter is : "+ (2*(height + width)));

// Print the calculated area using placeholders for values
       System.out.print("Area is : "+ (width*height));    
   }
}