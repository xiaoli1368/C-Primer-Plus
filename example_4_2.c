/*程序清单 4.2 praisel.c 程序*/
#include<stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];

	printf("What's your name?\n");
	scanf("%s", &name);
	printf("Hello, %s. %s\n", name, PRAISE);

	system("pause");
	return 0;
}