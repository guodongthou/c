public class Triangle {
    public static void main(String[] args)
    {
        int a[][]=new int[8][];
        for(int i=0;i<a.length;i++)
        {
            a[i]=new int [i+1];
        }
        for(int i=0;i<a.length;i++)
        {
            a[i][0]=1;
            a[i][i]=1;
        }
        for(int i=2;i<a.length;i++)
        {
            for(int j=1;j<a[i].length-1;j++)
            {
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            }
        }
        for(int i=0;i<a.length;i++)
        {
            for(int n=15;n>i;n--)
            {
                System.out.print("   ");
            }
            for(int j=0;j<a[i].length;j++)
            {
                System.out.printf("%6d",a[i][j]);
            }
            System.out.println();
        }
    }
}
