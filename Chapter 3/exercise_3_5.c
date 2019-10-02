/****************************************
 * CopyRight @ 2019-2029 
 * Func: print name
 * Auth: xiaoli
 * Date: 2019/10/02
 ****************************************/

#include<stdio.h>
#include<stdlib.h>

#define SECONDS_OF_YEAR 3.156e7

int main(int argc, char *argv[])
{
	unsigned int years = 0;

	printf("Please input your year: \n");
	while (!scanf("%d", &years) || years < 0){
		printf("Please input your years: \n");
		while (getchar() != '\n'); // clear the istream
	}

	printf("Seconds equal to your yeasr is: %.6f\n", years * SECONDS_OF_YEAR);

	system("pause");
	return 0;
}
