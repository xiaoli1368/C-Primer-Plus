/*程序清单 3.4 print2.c 程序 P49*/
#include<stdio.h>
int main()
{
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and not %d\n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig= %lld and not %ld\n", verybig, verybig);

	system("pause");
	return 0;

}