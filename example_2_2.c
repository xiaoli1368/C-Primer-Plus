/*程序清单2.2 fathm_ft.c 程序 P29 */

#include<stdio.h>
int main(void)
{
	int feet, fathoms;

	fathoms = 2;
	feet = 6 * fathoms;
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes, I said %d feet!\n", 6 * fathoms);

	system("pause");
	return 0;
}