#include<iostream>
#include<fstream>
#include<cstring> 
using namespace std;

int main()
{
	char a[] = "String is fun! ";
	char b[] = "not";
	strncpy ( a , b , 3);
	cout << a;
	
	return 0;
 } 

