/*****************************************
 * CopyRight @ 2019-2029 
 * Func: Change [age] to [days]
 * Auth: xiaoli
 * Date: 2019/09/29
 ****************************************/

#include<stdio.h>
#include<stdlib.h>

void first_print(){
	printf("Brazil, Russia");
}

void second_print(){
	printf("India, China");
}

int main(int argc, char *argv)
{
	first_print();
	printf(", ");
	second_print();
	printf("\n");
	second_print();
	printf(",\n");
	first_print();
	printf("\n");

    system("pause");
	return 0;
}
