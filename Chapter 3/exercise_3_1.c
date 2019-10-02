/****************************************
 * CopyRight @ 2019-2029 
 * Func: look up_down number+
 * Auth: xiaoli
 * Date: 2019/10/02
 ****************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	unsigned char un_int_up = (unsigned char)(0b11111111 + 1);
	signed char int_up = (signed char)(0b11111111 + 1);
	float float_up = 3.4e38 * 100.0f;
	float float_down = 0.1234e-10 / 10;

	printf("%d\n", un_int_up);
	printf("%d\n", int_up);
	printf("%f\n", float_up);
	printf("%f\n", float_down);

	system("pause");
	return 0;
}
