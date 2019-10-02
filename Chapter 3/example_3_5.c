/*程序清单 3.5 charcode.c 程序 P52*/
#include<stdio.h>
int main()
{
	char ch;

	printf("Please enter a character.\n");
	scanf("%c", &ch);
	printf("The code for %c is %d.\n", ch, ch);

	system("pause");
	return 0;
}