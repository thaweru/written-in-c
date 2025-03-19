#include <stdio.h>
#include <stdlib.h>
int leap_years_since_2000(int year)
{
	int count = year - 2000;
	int julian = count / 4;
	int non_greg = count / 400;
	return julian - non_greg;
}

char is_leap_year(int year)
{
	char yes;
	if (year%4 == 0)
	{
		if (year%400 == 0){ yes = 1; }
	}
	else { yes = 0; }
	return yes;
}

int add_days_from_month(int year,int month,int date)
{
	int count;
	switch (month)
	{
	case 1:
	count = 0; break;
	case 2:
	count = 31; break;
        case 3:
        count = 59; break;
        case 4:
        count = 90; break;
        case 5:
        count = 120; break;
        case 6:
        count = 151; break;
        case 7:
        count = 181; break;
        case 8:
        count = 212; break;
        case 9:
        count = 243; break;
        case 10:
        count = 273; //printf("October");
	break;
        case 11:
        count = 304; break;
        case 12:
        count = 334; break;
	default:
	printf("Invalid number for month\n");
	exit(EXIT_FAILURE);
	}
	if (is_leap_year(year)==1)
	{
	count = count + 1;
	}
	//printf("%i",count);
	return count;
}

int main()
{
	int year;
	int month;
	int date;
	printf("input date: (format YYYY/MM/DD)\n");
	scanf("%i/%i/%i", &year, &month, &date);
	//printf("%i",month);
	//printf("numbr of leap years since 2000 is %i\n", leap_years_since_2000(year));
	int count = year - 2001 + leap_years_since_2000(year);
	count = count + add_days_from_month(year,month,date) + date;
	int day = count % 7;
	printf("This date is a ");
	switch (day)
	{
	case 1:
	printf("Monday\n"); break;
	case 2:
	printf("Tuesday\n"); break;
	case 3:
	printf("Wednesday\n"); break;
	case 4:
	printf("Thursday\n"); break;
	case 5:
	printf("Friday\n"); break;
	case 6:
	printf("Saturday\n"); break;
	case 0:
	printf("Sunday\n"); break;
	}
}

