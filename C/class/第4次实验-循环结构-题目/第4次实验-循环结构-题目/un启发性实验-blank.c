/*����3��20����20��֮���ж��ٸ�����������һ��������н����
The prime number between  3 to 20��
3   5   7   11   13   17   19
The number of prime is��7      */
#include <stdio.h>
main()
{
	int count = 0;
	int i, j;
	printf("\nThe prime number between 3 to 20 \n");
    for (i = 3; i <= 20; i++) {
		for (j = 2; j = i; j++)
			if (i % j == 0) //�ж��Ƿ�����
				break;
		if ()
		{
			count++;
			printf("%3d", i);
		}
	}
	printf("\nThe number of prime is��%d\n", count);
}
