#include<iostream>
#include<time.h>
#include<stdlib.h> 
using namespace std;

int main()
{
	time_t t;
	struct tm *TIME;
	while(1){
		time(&t);
		TIME = localtime(&t);
		cout << "isdst: " << TIME->tm_isdst << endl 
			 << "day of the month (日): " << TIME->tm_mday << endl
			 << "month (月): " << TIME->tm_mon+1 << endl 
			 << "wday (星期): " << TIME->tm_wday << endl
			 << "days since January 1: "<< TIME->tm_yday <<endl
			 << "year: " << TIME->tm_year+1900 << endl;
		
		cout << "現在時間: " << TIME->tm_hour << ":" << TIME->tm_min << ":" << TIME->tm_sec << endl;
		system("cls");
	}
	
	return 0;		
}
	
