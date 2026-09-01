import java.util.Scanner;

public class numrev {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = sc.nextInt();

        int original = number;
        int reversed = 0;

        // handle negative numbers
        boolean isNegative = number < 0;
        if (isNegative) {
            number = -number;
        }

        while (number != 0) {
            int digit = number % 10;
            reversed = reversed * 10 + digit;
            number /= 10;
        }

        if (isNegative) {
            reversed = -reversed;
        }

        System.out.println("Original: " + original);
        System.out.println("Reversed: " + reversed);

        sc.close();
    }
}