#include<iostream>
using namespace std;

int main(){
	int year;
	cin >> year;
	if ( !(year%4) ){
		
		if (!(year%100) && year%400 ){
			cout << year << "�~�����|�~" << endl;
		}
		else{ 
			cout << year << "�~���|�~" << endl;
		}
	}
	else{
		cout << year << "�~�����|�~" << endl;
	}
	
	return 0;
} 
