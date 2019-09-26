/*****************************************
 * CopyRight @ 2019-2029 
 * Func: Change [age] to [days]
 * Auth: xiaoli
 * Date: 2019/09/26
 ****************************************/

#include<stdio.h>
#include<stdlib.h>

void print_message(){
	printf("========================================================\n");
	printf("Please input your birthday: (For example - [1970.01.01])\n");
}

// [NOTE](xiaoli): clear the input stream and set length to zero
void clear_input(int *rev_length){
	while(getchar() != '\n');
	*rev_length = 0;
}

// [NOTE](xiaoli): judge year is run or ping
int judge_years(int year){
	return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 1 : 0;
}

int is_normal(int year, int month, int day, int *mon_days_p, int *mon_days_r){
	if (year > 2019 || month == 0 || month > 12 || (judge_years(year) && mon_days_r[month - 1] < day) || (judge_years(year) && mon_days_p[month - 1] < day)){
		return 0;
	} else {
		return 1;
	}
}

int main(int argc, char *argv)
{
	int rev_sign = 1;
	int rev_length = 0;
	char rev_char = '0';
	int rev_data[8] = {0};
	int year, month, day;
	int mon_days_p[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int mon_days_r[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	print_message();
	while (1){
		//printf("%d\n", rev_length);
		if (!(scanf("%c", &rev_char))){
			printf("Your input cannot be recognized. Please redo!\n");
			clear_input(&rev_length);
			print_message();
		} else if (rev_length < 8){
			//printf("%c\n", rev_char);
			if (rev_char <= '9' && rev_char >= '0'){
				rev_data[rev_length++] = rev_char - 0x30;
			} else if (rev_char == '.'){
				continue;
			} else if (rev_char == '\n') {
				printf("You should input more numbers! Please redo!\n");
				rev_length = 0;
				print_message();
			} else {
				printf("You should input numbers! Please redo!\n");
				clear_input(&rev_length);
				print_message();
			}
		} else if (rev_length == 8){
			if (rev_char != '\n'){
				printf("You have input too many things! Please redo!\n");
				clear_input(&rev_length);
				print_message();
			} else {
				year = rev_data[0] * 1000 + rev_data[1] * 100 + rev_data[2] * 10 + rev_data[3];
				month = rev_data[4] * 10 + rev_data[5];
				day = rev_data[6] * 10 + rev_data[7];

				printf("%d, %d, %d\n", year, month, day);
				rev_length = 0;
				//break;
				print_message();
			}
		}
		

	}

    system("pause");
	return 0;
}
