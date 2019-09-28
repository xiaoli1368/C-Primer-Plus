/*****************************************
 * CopyRight @ 2019-2029 
 * Func: Change [age] to [days]
 * Auth: xiaoli
 * Date: 2019/09/26 - 28
 ****************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define DAY_OF_RUN_YEAR 366
#define DAY_OF_PING_YEAR 365

// [NOTE](xiaoli): get local date
void get_date(int *year_loc, int *mon_loc, int *day_loc){
	time_t now;
	struct tm *tm_now;
	time(&now);
	tm_now = localtime(&now);
	*year_loc = tm_now->tm_year + 1900;
	*mon_loc = tm_now->tm_mon + 1;
	*day_loc = tm_now->tm_mday;
}

// [NOTE](xiaoli): print some message
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

// [NOTE](xiaoli): judge if input date is ok
int is_normal(int year, int month, int day, int *mon_days_p, int *mon_days_r){
	if (year > 2019 || month == 0 || month > 12 || (judge_years(year) && mon_days_r[month - 1] < day) || (judge_years(year) && mon_days_p[month - 1] < day)){
		return 0;
	} else {
		return 1;
	}
}

// [NOTE](xiaoli): calculate time difference from [0000.01.01]
int cal_day_diff(int year, int month, int day, int *mon_days_p, int *mon_days_r){
	int all_day_diff = 0;
	for (int year_index = 0; year_index < year; year_index++){
		all_day_diff += (judge_years(year_index)? DAY_OF_RUN_YEAR: DAY_OF_PING_YEAR);
	}
	for (int mon_index = 1; mon_index < month; mon_index++){
		all_day_diff += (judge_years(year)? mon_days_r[mon_index - 1]: mon_days_p[mon_index - 1]);
	}
	all_day_diff += day;
	return all_day_diff;
}

int main(int argc, char *argv)
{
	int rev_sign = 1;
	int rev_length = 0;
	char rev_char = '0';
	int rev_data[8] = {0};
	int year, month, day;
	int year_loc, mon_loc, day_loc;
	int diff_first, diff_local;
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

				printf("Your birthday is: [%d.%d.%d]\n", year, month, day);
				if (!is_normal(year, month, day, mon_days_p, mon_days_r)){
					printf("Are you kidding me? Please input correct number!\n");
				} else {
					get_date(&year_loc, &mon_loc, &day_loc);
					diff_first = cal_day_diff(year, month, day, mon_days_p, mon_days_r);
					diff_local = cal_day_diff(year_loc, mon_loc, day_loc, mon_days_p, mon_days_r);
					printf("Local date is: [%d.%d.%d]\n", year_loc, mon_loc, day_loc);
				    printf("Diff of first day is: [%d]\n", diff_first);
					printf("Diff of local day is: [%d]\n", diff_local - diff_first);
				}
				rev_length = 0;
				print_message();
			}
		}
	}

    system("pause");
	return 0;
}
