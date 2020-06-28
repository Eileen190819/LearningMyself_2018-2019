#include<iostream>
using namespace std;

int main(){
	int year;
	cin >> year;
	if ( !(year%4) ){
		
		if (!(year%100) && year%400 ){
			cout << year << "年不為閏年" << endl;
		}
		else{ 
			cout << year << "年為閏年" << endl;
		}
	}
	else{
		cout << year << "年不為閏年" << endl;
	}
	
	return 0;
} 
