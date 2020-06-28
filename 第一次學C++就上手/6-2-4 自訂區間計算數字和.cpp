#include<iostream>
using namespace std;

int f(int,int);

int main(){
	int A,B;
	
	cout << "請輸入兩個整數：";
	cin  >> A >> B ;
	cout << "由" << A << "加到" << B << "=" << f(A,B) << endl; 

	
	return 0;
} 

int f(int A,int B){
	
	int sum=0;
	for(int i=A;i<=B;i++){
		sum+=i;
	}
	return sum;
}
