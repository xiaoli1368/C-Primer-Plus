/****************************************
 * CopyRight @ 2019-2029 
 * Func: print floating-number
 * Auth: xiaoli
 * Date: 2019/10/02
 ****************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	float number;
	
	printf("Enter a floating-point value: ");
	while (!scanf("%f", &number)){
		printf("You must input a float number.\n");
		printf("Enter a floating-point value: ");
	}
	printf("fixed-point notation: %.6f\n", number);
	printf("exponential notation: %.6e\n", number);
	printf("p notation: %a\n", number);

	system("pause");
	return 0;
}
