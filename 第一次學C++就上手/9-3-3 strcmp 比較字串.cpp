#include<iostream>
#include<fstream>
#include<cstring> 
using namespace std;

int main()
{
	char a[] = "String is fun! ";
	char b[] = "String is";
	if ( ! strcmp( a , b ))
		cout << "a and b are same.(strcmp)";
	else if ( ! strncmp( a , b , 10 ))
		cout << "a and b are same.(strncmp)";
	else
		cout << "Not same."	;
	
	
	return 0;
 } 

