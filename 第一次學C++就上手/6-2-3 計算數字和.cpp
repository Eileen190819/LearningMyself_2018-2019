#include<iostream>
using namespace std;

int f(int);

int main(){
	int X;
	while(1){
	
		cout << "請輸入一整數：";
		cin  >> X ;
		cout << "1+2+...+" << X << "=" << f(X) << endl; 
	}
	
	return 0;
} 

int f(int X){
	
	int sum=0;
	for(int i=1;i<=X;i++){
		sum+=i;
	}
	return sum;
}
