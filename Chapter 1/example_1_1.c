/* 程序清单1.1 C源代码示例 P8 */

#include <stdio.h>
int main()
{
	int dogs;

	printf("How many dogs do you have?\n");
	scanf("%d", &dogs);
	printf("So you have %d dog(s)!\n", dogs);

	system("pause");
	return 0;
}