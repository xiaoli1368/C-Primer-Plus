/*程序清单 2.5 stillbad.c 程序 P33 */

#include<stdio.h>
void main(void)
{
	int n, n2, n3;

	n = 5;
	n2 = n * n;
	n3 = n2 * n2;
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

	system("pause");
	return 0;
}