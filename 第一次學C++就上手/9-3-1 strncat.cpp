#include<iostream>
#include<fstream>
#include<cstring> 
using namespace std;

int main()
{
	char a[] = "Hello! ";
	char b[10];
	
	cout << "What's your name?  ";
	cin >> b; //�J��Ů�,�Ů�᪺�����|Ū�i�h 
	strncat(a ,b ,5);
	cout << a;
	
	return 0;
 } 

