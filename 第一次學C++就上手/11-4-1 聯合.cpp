#include<iostream>
using namespace std;

union mine{
	int a;
	double b;
	char c;
};

int main()
{
	union mine A;
	A.a = 65;
	cout << A.a <<	" " << A.b << " " << A.c;
	return 0;
 } 

