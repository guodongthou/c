import java.util.Scanner;

public class Months {
    public static void main(String[] args) {
        int year, month, xqs;// 输入年月和该月第一天的星期数
        System.out.println("请输入年月和第一天的星期数");
        try (Scanner s = new Scanner(System.in)) {
            year = s.nextInt();
            month = s.nextInt();
            xqs = s.nextInt();
        }
        System.out.println("Sun Mon Tue Wed Thu Fri Sat ");// 输出日历头
        if (xqs == 7)
            System.out.print(" ");
        else {
            for (int kg = 1; kg <= xqs; kg++)// 输出该月第一天前的空格
                System.out.printf("%4c", ' ');
        }
        int days = 0;// 计算days的值
        switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                days = 31;
                break;
            case 2:
                if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
                    days = 29;
                else
                    days = 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                days = 30;
                break;
        }
        for (int day = 1; day <= days; day++)// 输出每一天
        {
            System.out.printf("%2d  ", day);
            if ((xqs + day) % 7 == 0)
                System.out.println();
        }
        if ((days + xqs) % 7 != 0)
            System.out.println();
    }
}