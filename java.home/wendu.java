import java.util.Scanner;
public class wendu {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        double F,C;
        F = sc.nextDouble();
        C = 5*(F-32)/9;
        System.out.println("c="+String.format("%.2f",C));
    }
}