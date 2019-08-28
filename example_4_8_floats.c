// floats.c -- some floating-point combinations
// 啊手动阀
#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99;  // const-style constant
    
    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
    
	system("pause");
    return 0;
}
