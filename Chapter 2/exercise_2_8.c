/*****************************************
 * CopyRight @ 2019-2029 
 * Func: print txt
 * Auth: xiaoli
 * Date: 2019/09/29
 ****************************************/

#include<stdio.h>
#include<stdlib.h>

void one_three();
void two();

void one_three(){
	printf("one\n");
	two();
	printf("three\n");
}

void two(){
	printf("two\n");
}

int main(int argc, char *argv)
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");
	
	system("pause");
	return 0;
}
