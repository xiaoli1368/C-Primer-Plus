/*程序清单 2.4 nogood.c 程序 P32 */

#include<stdio.h>
int main(void)
{
	int n; int n2; int n3;
	// int n, int n2, int n3; // 这是原始的错误的
	// 改为三个分号就是可行的

	n = 5;
	n2 = n * n;
	n3 = n2 * n2;
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

	system("pause");
	return 0;
}