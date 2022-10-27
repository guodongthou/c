/*计算3～20（含20）之间有多少个素数，并逐一输出。运行结果：
The prime number between  3 to 20：
3   5   7   11   13   17   19
The number of prime is：7      */
#include <stdio.h>
main()
{
	int count = 0;
	int i, j;
	printf("\nThe prime number between 3 to 20 \n");
    for (i = 3; i <= 20; i++) {
		for (j = 2; j = i; j++)
			if (i % j == 0) //判断是否整除
				break;
		if ()
		{
			count++;
			printf("%3d", i);
		}
	}
	printf("\nThe number of prime is：%d\n", count);
}
