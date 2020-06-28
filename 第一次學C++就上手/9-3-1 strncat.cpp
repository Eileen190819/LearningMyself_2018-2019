#include<iostream>
#include<fstream>
#include<cstring> 
using namespace std;

int main()
{
	char a[] = "Hello! ";
	char b[10];
	
	cout << "What's your name?  ";
	cin >> b; //遇到空格,空格後的都不會讀進去 
	strncat(a ,b ,5);
	cout << a;
	
	return 0;
 } 

