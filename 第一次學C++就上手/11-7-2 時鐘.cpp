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
			 << "day of the month (��): " << TIME->tm_mday << endl
			 << "month (��): " << TIME->tm_mon+1 << endl 
			 << "wday (�P��): " << TIME->tm_wday << endl
			 << "days since January 1: "<< TIME->tm_yday <<endl
			 << "year: " << TIME->tm_year+1900 << endl;
		
		cout << "�{�b�ɶ�: " << TIME->tm_hour << ":" << TIME->tm_min << ":" << TIME->tm_sec << endl;
		system("cls");
	}
	
	return 0;		
}
	
