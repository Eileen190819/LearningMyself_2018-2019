#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	char oper;
	
	cout << "請輸入二元運算式：" ;
	cin >>  a >> oper >> b ;
	
	switch(oper)
	{
		case('+'):
			cout << "計算結果為：" << a+b << endl;
			break;
		
		case('-'):
			cout << "計算結果為：" << a-b << endl;
			break;
			
		case('/'):
			cout << "計算結果為：" << (float)a/b << endl;
			break;
			
		case('*'):
			cout << "計算結果為：" << a*b << endl;
			break;
			
		default:
			cout << "輸入的四則運算有誤" << endl; 
			break;		 
		
	}
		
	return 0;	
}
