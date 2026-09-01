import java.util.Scanner;

public class TrafficAgent {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // ---- Input Section ----
        System.out.print("Enter vehicle number: ");
        String vehicleNumber = sc.nextLine();

        System.out.print("Enter vehicle speed (km/h): ");
        int speed = sc.nextInt();

        System.out.print("Enter speed limit (km/h): ");
        int speedLimit = sc.nextInt();

        System.out.print("Enter driver's age: ");
        int age = sc.nextInt();

        sc.nextLine(); // consume leftover newline

        System.out.print("Is driver wearing helmet? (yes/no): ");
        String helmetInput = sc.nextLine();
        boolean helmetOn = helmetInput.equalsIgnoreCase("yes");

        System.out.print("Is driver wearing seatbelt? (yes/no): ");
        String seatbeltInput = sc.nextLine();
        boolean seatbeltOn = seatbeltInput.equalsIgnoreCase("yes");

        System.out.print("Does driver have a valid license? (yes/no): ");
        String licenseInput = sc.nextLine();
        boolean hasValidLicense = licenseInput.equalsIgnoreCase("yes");

        System.out.print("Is this an emergency vehicle? (yes/no): ");
        String emergencyInput = sc.nextLine();
        boolean isEmergencyVehicle = emergencyInput.equalsIgnoreCase("yes");

        // ---- Analysis Section (using Java operators) ----

        // Relational operator: check overspeeding
        boolean isOverspeeding = speed > speedLimit;

        // Arithmetic + relational: how much above limit
        int speedExcess = isOverspeeding ? (speed - speedLimit) : 0;

        // Relational operator: underage driver (below 18)
        boolean isUnderage = age < 18;

        // Logical NOT operator: violations of safety gear
        boolean noHelmet = !helmetOn;
        boolean noSeatbelt = !seatbeltOn;
        boolean noLicense = !hasValidLicense;

        // Fine variables
        int speedFine = 0;
        int helmetFine = 0;
        int seatbeltFine = 0;
        int licenseFine = 0;
        int underageFine = 0;
        int totalFine = 0;

        // Emergency vehicles are exempt from speed rules (logical AND / NOT)
        boolean speedViolation = isOverspeeding && !isEmergencyVehicle;

        // Calculate fines using arithmetic + assignment operators
        if (speedViolation) {
            speedFine = 500 + (speedExcess * 10); // base fine + per km/h excess
        }

        if (noHelmet) {
            helmetFine = 1000;
        }

        if (noSeatbelt) {
            seatbeltFine = 1000;
        }

        if (noLicense) {
            licenseFine = 5000;
        }

        if (isUnderage) {
            underageFine = 25000; // heavy fine for underage/unlicensed driving
        }

        // Compound logical operators: determine overall violation status
        boolean hasAnyViolation = speedViolation || noHelmet || noSeatbelt || noLicense || isUnderage;

        // Total fine using += (compound assignment operator)
        totalFine += speedFine;
        totalFine += helmetFine;
        totalFine += seatbeltFine;
        totalFine += licenseFine;
        totalFine += underageFine;

        // Special condition: license suspension check (logical AND, relational)
        boolean licenseSuspension = (isUnderage && noLicense) || (speedExcess > 40);

        // ---- Final Violation Record ----
        System.out.println("\n===== TRAFFIC VIOLATION RECORD =====");
        System.out.println("Vehicle Number      : " + vehicleNumber);
        System.out.println("Emergency Vehicle    : " + (isEmergencyVehicle ? "YES" : "NO"));
        System.out.println("Speed Recorded       : " + speed + " km/h");
        System.out.println("Speed Limit          : " + speedLimit + " km/h");
        System.out.println("Overspeeding         : " + (isOverspeeding ? "YES (+" + speedExcess + " km/h)" : "NO"));
        System.out.println("Driver Age           : " + age);
        System.out.println("Helmet Worn          : " + (helmetOn ? "YES" : "NO"));
        System.out.println("Seatbelt Worn        : " + (seatbeltOn ? "YES" : "NO"));
        System.out.println("Valid License        : " + (hasValidLicense ? "YES" : "NO"));

        System.out.println("\n----- Fine Breakdown -----");
        System.out.println("Speeding Fine        : Rs. " + speedFine);
        System.out.println("No Helmet Fine       : Rs. " + helmetFine);
        System.out.println("No Seatbelt Fine     : Rs. " + seatbeltFine);
        System.out.println("No License Fine      : Rs. " + licenseFine);
        System.out.println("Underage Driving Fine: Rs. " + underageFine);
        System.out.println("--------------------------");
        System.out.println("TOTAL FINE           : Rs. " + totalFine);

        System.out.println("\nOverall Status       : " + (hasAnyViolation ? "VIOLATION DETECTED" : "NO VIOLATION - SAFE DRIVING"));
        System.out.println("License Suspension   : " + (licenseSuspension ? "YES" : "NO"));

        sc.close();
    }
}