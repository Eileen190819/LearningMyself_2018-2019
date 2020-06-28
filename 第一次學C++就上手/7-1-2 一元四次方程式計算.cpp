#include<iostream>
using namespace std;


int main(){
	
	int i, s[5], x, f=0, k=1;
	for(i=0;i<5;i++){

		cout << "請輸入方程式中" << i << "次項的係數: ";
		cin >>  s[i];
	}	
	cout << "請輸入欲計算的變數值: ";
	cin >> x;
	
	for(i=0;i<5;i++){
		k=1;
		for(int j=0;j<i;j++){			
			k*=x;
		}	
		cout << "k=" <<k << endl;
		
		f += k*s[i];
	}
	
	cout << "f(" << x << ")= " << f ;
	
	
	
	return 0;
} 

