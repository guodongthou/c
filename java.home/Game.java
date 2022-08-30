import java.util.Random;
import java.util.Scanner;

public class Game {
    public static void main(String[] args) {
        Random r = new Random();
        int n = r.nextInt(100);
        int g;
        while (true) {
            System.out.println("请输入你要猜的这个整数大小");
            try (Scanner s = new Scanner(System.in)) {
                g = s.nextInt();
            }
            if (n > g)
                System.out.println("猜小了");
            else if (n < g)
                System.out.println("猜大了");
            else {
                System.out.println("恭喜你，猜对了");
                break;
            }
        }
    }
}