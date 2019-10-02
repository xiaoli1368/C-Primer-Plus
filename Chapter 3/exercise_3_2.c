/****************************************
 * CopyRight @ 2019-2029 
 * Func: print name
 * Auth: xiaoli
 * Date: 2019/10/02
 ****************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int ascii = 0;

	printf("Please input the value of an ASCII-Key: ");
	while (scanf("%d", &ascii)){
		if (ascii >= -128 && ascii <= 127){
			printf("The value is: %d\n", ascii);
			printf("The printed ASCII-Key is: %c\n", ascii);
			break;
		} else {
			printf("Please input again!(between -128 and 127): ");
		}
	}
	
	system("pause");
	return 0;
}
