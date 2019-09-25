/*****************************************
 * CopyRight @ 2019-2029 
 * Func: Change [inch] to [cm]
 * Auth: xiaoli
 * Date: 2019/09/25
 ****************************************/

#include<stdio.h>
#include<stdlib.h>

#define SCALE_FACTOR 2.54

int main()
{
	float num = 0;
	char chr = '0';

	while (1){
		printf("==================================================\n");
		printf("Please input value: [Or you can press 'q' to exit]\n");
		if (scanf("%f", &num)){
			if (num >= 0){
				printf("[input] : %.6f inch\n", num);
				printf("[output]: %.6f cm\n", num / SCALE_FACTOR);
				continue;
			} else {
				printf("You should input a positive number!");
			}
		}
		
		// NOTE(xiaoli): when scanf("%f") failed, data also stay in iostream
		if ((scanf("%c", &chr), chr == 'q')){
			printf("Exit! Goodbye!\n");
			break;
		} else {
			// NOTE(xiaoli): clear the iostream
			while (getchar() != '\n');
			printf("You should input a number!\n");
	 	}
	}	
	
	system("pause");
	return 0;
}
