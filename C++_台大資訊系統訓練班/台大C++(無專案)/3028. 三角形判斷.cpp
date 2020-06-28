#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	cin >> a >> b >> c ;
	
	if(a+b>c && b+c>a && a+c>b){
		if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
			cout << "True" << endl << "Right Triangle" ;
		else
			cout << "True" << endl << "Non-Right Triangle" ;
	}
	else{
		cout << "False" ;
	}
	
	return 0;
} 
