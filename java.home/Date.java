import java.util.Scanner;

public class Date {
    public static void main(String[] args) {
        int day;
        System.out.println("Please enter the year and number represented the week");
        try (Scanner in = new Scanner(System.in)) {
            int year = in.nextInt();
            int week = in.nextInt();
            String[] m = { "January", " February", "March", "April", "May", "June",
                    "July", "August", "September", "October", "November", "December" };
            if (isLeap(year)) {
                for (int i = 0; i < 12; i++) {
                    if (i != 1) {
                        day = getMonth(i);
                        System.out.println("                " + m[i] + "  " + year);
                        week = getDate(day, week);
                    } else {
                        day = 29;
                        System.out.println("                " + m[i] + " " + year);
                        week = getDate(day, week);
                    }
                }
            } else {
                for (int i = 0; i < 12; i++) {
                    if (i != 1) {
                        day = getMonth(i);
                        System.out.println("                " + m[i] + " " + year);
                        week = getDate(day, week);
                    } else {
                        day = 28;
                        System.out.println("                " + m[i] + " " + year);
                        week = getDate(day, week);
                    }
                }
            }
        }
    }

    public static int getMonth(int month) {
        if (month <= 7) {
            if (month % 2 == 0)
                return 31;
            else
                return 30;
        } else if (month % 2 == 0)
            return 30;
        else
            return 31;
    }

    public static boolean isLeap(int year) {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            return true;
        else
            return false;
    }

    public static int getDate(int day, int week) {
        int a = 1;
        System.out.println("----------------------------------------------");
        System.out.println("Sun    Mon    Tue    Wed    Thu    Fri    Sat");
        for (int j = 0; j <= 5; j++) {
            System.out.println();
            for (int k = 0; k < 7; k++) {
                if (k < week)
                    System.out.print("       ");
                else if (a < 10)
                    System.out.print(" " + a + "     ");
                else
                    System.out.print(a + "     ");
                a++;
                day--;
                if (day == 0) {
                    week = k + 1;
                    break;
                }
                if (k == 6)
                    week = 0;
            }
            if (day == 0)
                break;
        }
        if (week == 7)
            week = 0;
        System.out.println();
        return week;
    }
}