/*�����嵥 2.4 nogood.c ���� P32 */

#include<stdio.h>
int main(void)
{
	int n; int n2; int n3;
	// int n, int n2, int n3; // ����ԭʼ�Ĵ����
	// ��Ϊ�����ֺž��ǿ��е�

	n = 5;
	n2 = n * n;
	n3 = n2 * n2;
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

	system("pause");
	return 0;
}