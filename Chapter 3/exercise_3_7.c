/****************************************
 * CopyRight @ 2019-2029 
 * Func: print name
 * Auth: xiaoli
 * Date: 2019/10/02
 ****************************************/

#include<stdio.h>
#include<stdlib.h>

#define INC_TO_CM 2.54

int main(int argc, char *argv[])
{
	float height = 0.0;

	printf("Please input your height(/inc): \n");
	while (!scanf("%f", &height) || height < 0){
		printf("Please input your height(/inc): \n");
		while (getchar() != '\n'); // clear the istream
	}

	printf("Your height equals to: %.6f cm\n", height * INC_TO_CM);

	system("pause");
	return 0;
}
