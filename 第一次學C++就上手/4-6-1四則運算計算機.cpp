#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	char oper;
	
	cout << "�п�J�G���B�⦡�G" ;
	cin >>  a >> oper >> b ;
	
	switch(oper)
	{
		case('+'):
			cout << "�p�⵲�G���G" << a+b << endl;
			break;
		
		case('-'):
			cout << "�p�⵲�G���G" << a-b << endl;
			break;
			
		case('/'):
			cout << "�p�⵲�G���G" << (float)a/b << endl;
			break;
			
		case('*'):
			cout << "�p�⵲�G���G" << a*b << endl;
			break;
			
		default:
			cout << "��J���|�h�B�⦳�~" << endl; 
			break;		 
		
	}
		
	return 0;	
}
