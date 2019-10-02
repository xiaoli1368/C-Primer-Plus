/****************************************
 * CopyRight @ 2019-2029 
 * Func: print name
 * Auth: xiaoli
 * Date: 2019/10/02
 ****************************************/

#include<stdio.h>
#include<stdlib.h>

#define KUA_TO_NUMBER (950/3.0e-23)

int main(int argc, char *argv[])
{
	int kua = 0;

	printf("Please input the kua-tuo of water: \n");
	while (!scanf("%d", &kua) || kua < 0){
		printf("Please input the kua-tuo of water: \n");
		while (getchar() != '\n'); // clear the istream
	}

	printf("The number of water is: %.6f\n", kua * KUA_TO_NUMBER);

	system("pause");
	return 0;
}
