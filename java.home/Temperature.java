import java.util.Scanner;
public class Temperature
{
    public static void main (String [] args)
    {
        double F,C;
        Scanner S = new Scanner ( System.in);
        F = S.nextDouble();
        C = 5*(F-32)/9;
        System.out.printf("c=%.2f\n",C);
    }
}