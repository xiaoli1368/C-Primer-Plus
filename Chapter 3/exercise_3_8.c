/****************************************
 * CopyRight @ 2019-2029 
 * Func: Change Cup to others
 * Auth: xiaoli
 * Date: 2019/10/02
 ****************************************/

#include<stdio.h>
#include<stdlib.h>

#define PIN_TO_CUP 2
#define ANG_TO_CUP 8
#define DA_TO_CUP ANG_TO_CUP * 2
#define CHA_TO_CUP DA_TO_CUP * 3

int main(int argc, char *argv[])
{
	int cup_num = 0;

	printf("Please input the number of Cup: \n");
	while (!scanf("%d", &cup_num) || cup_num < 0){
		printf("Failed to receive, maybe your input is not good!\n");
		printf("Please input the number of Cup: \n");
		while (getchar() != '\n'); // clear the istream
	}

	printf("Translate Cup-num to Pin-num: %f\n", (float)cup_num / PIN_TO_CUP);
	printf("Translate Cup-num to Ang-num: %d\n", cup_num * ANG_TO_CUP);
	printf("Translate Cup-num to Da-num: %d\n", cup_num * DA_TO_CUP);
	printf("Translate Cup-num to Cha-num: %d\n", cup_num * CHA_TO_CUP);

	system("pause");
	return 0;
}
