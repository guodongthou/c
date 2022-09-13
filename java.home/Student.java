public class Student {
    private static double height;
    private static Shape s;
    public static int r;
    public static int width;
    public static int length;

    public double getVolume() {
        return s.getArea() * height;
    }

    public Student(double d, Shape s) {
        Student.height = d;
        Student.s = s;
    }

    public static void main(String[] args) {
        Shape s = new Circle(2);// 抽象类不能通过构造方法生成对象,而可以通过子类构造方法生成对象
        Student p1 = new Student(10, s);
        System.out.println("圆柱体体积" + p1.getVolume());
        Shape s2 = new Rectangle(3, 4);
        Student p2 = new Student(10, s2);
        System.out.println("长方体体积" + p2.getVolume());
    }
}

abstract class Shape {
    public abstract double getArea();
}

class Circle extends Shape {
    private int r;

    public Circle(int r) {
        Student.r = r;
    }

    public double getArea() {
        return Math.PI * r * r;
    }
}

class Rectangle extends Shape {
    private int length, width;

    public Rectangle(int l, int w) {
        super();
        Student.length = l;
        Student.width = w;
    }

    public double getArea() {
        return length * width;
    }
}