import java.util.Scanner;

public class StudentAnalyser {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Ask for student's name
        System.out.print("Enter student's name: ");
        String name = sc.nextLine();

        // Ask for marks in 3 subjects
        System.out.print("Enter marks in Subject 1 (out of 100): ");
        int sub1 = sc.nextInt();

        System.out.print("Enter marks in Subject 2 (out of 100): ");
        int sub2 = sc.nextInt();

        System.out.print("Enter marks in Subject 3 (out of 100): ");
        int sub3 = sc.nextInt();

        // Calculate total and average
        int total = sub1 + sub2 + sub3;
        double average = total / 3.0;

        // Check pass/fail (assume passing mark per subject is 40)
        boolean passed = (sub1 >= 40) && (sub2 >= 40) && (sub3 >= 40);

        // Check distinction (average >= 75)
        boolean distinction = passed && (average >= 75);

        // Check special award (average >= 90 and no subject below 80)
        boolean specialAward = passed && (average >= 90) && (sub1 >= 80) && (sub2 >= 80) && (sub3 >= 80);

        // Display final result
        System.out.println("\n----- STUDENT RESULT -----");
        System.out.println("Name: " + name);
        System.out.println("Subject 1: " + sub1);
        System.out.println("Subject 2: " + sub2);
        System.out.println("Subject 3: " + sub3);
        System.out.println("Total Marks: " + total);
        System.out.println("Average Marks: " + average);

        if (passed) {
            System.out.println("Result: PASSED");
        } else {
            System.out.println("Result: FAILED");
        }

        if (distinction) {
            System.out.println("Distinction: YES");
        } else {
            System.out.println("Distinction: NO");
        }

        if (specialAward) {
            System.out.println("Special Award: YES - Congratulations!");
        } else {
            System.out.println("Special Award: NO");
        }

        sc.close();
    }
}