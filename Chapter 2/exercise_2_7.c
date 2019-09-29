/*****************************************
 * CopyRight @ 2019-2029 
 * Func: Change [age] to [days]
 * Auth: xiaoli
 * Date: 2019/09/29
 ****************************************/

#include<stdio.h>
#include<stdlib.h>

void first_print(){
	printf("Smile!");
}

int main(int argc, char *argv)
{
	for (int i = 0; i < 3; i++){
		first_print();
	}
	printf("\n");
	for (int i = 0; i < 2; i++){
		first_print();
	}
	printf("\n");
	first_print();
	printf("\n");

    system("pause");
	return 0;
}
