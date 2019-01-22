//============================================================================
// Name        : y_m_d_w_A2000.cpp
// Author      : Owen
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// input:DAY, days from(after) 2000-01-01
// ouput:year,month,day,week of DAY
//============================================================================

#include <iostream>
using namespace std;

int DAY;
int g_days[10000] = {0};
char *g_DaynameOfWeek[] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
int g_year, g_month, g_day;
char *g_week;
int g_RemainingDay;

int DaysOfYear(int year)
{
	if((year % 100) == 0)
	{
		if((year % 400) == 0)
		{
			return 366;
		}
		else
		{
			return 365;
		}
	}
	else
	{
		if((year % 4) == 0)
		{
			return 366;
		}
		else
		{
			return 365;
		}
	}
}

void BuildArray(int days[]){
	for(int i = 2000;i < 9999;i += 1){
		days[i - 2000] = DaysOfYear(i);
	}
}

void Week(int day, char *week[]){
	g_week = week[day % 7];
}

void Year(int day, int days[]){

	int year = 2000;
	for (int i = 0; (day > days[i]) && (i < 7999);i ++){
		year ++;
		day -= days[i];
	}
	g_year = year;
	g_RemainingDay = day;
}

int main() {
	while (1){
	cin >> DAY;

	Week (DAY, g_DaynameOfWeek);
	cout << g_week << endl;

	BuildArray(g_days);
	Year(DAY, g_days);
	cout << g_year <<' ' << g_RemainingDay << endl;
	}
	return 0;
}
