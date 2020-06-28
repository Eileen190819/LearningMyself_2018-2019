#include<iostream>
using namespace std;

int f(int);

int main(){
	int A;
	
	cout << "請輸入整數：";
	cin  >> A ;
	cout << "f(" << A << ")" << "=" << f(A) << endl; 
	
	return 0;
} 

int f(int A){
	
	if(A==1 || A==2)
		return 1;
		
	return f(A-1)+f(A-2);
}
