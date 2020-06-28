#include<iostream>
using namespace std;

int C(int,int);

int main(){
	int A,B;
	
	cout << "請輸入整數：";
	cin  >> A >> B;
	cout << "C(" << A << "," << B << ")="<< C(A,B) << endl; 
	
	return 0;
} 

int C(int A,int B){
	
	if(A==B || B==0)
		return 1;
	else if(A<B)
		return -1;
	else
		return C(A-1,B)+C(A-1,B-1);
			
}
