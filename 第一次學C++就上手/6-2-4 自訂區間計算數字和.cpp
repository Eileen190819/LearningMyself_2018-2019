#include<iostream>
using namespace std;

int f(int,int);

int main(){
	int A,B;
	
	cout << "�п�J��Ӿ�ơG";
	cin  >> A >> B ;
	cout << "��" << A << "�[��" << B << "=" << f(A,B) << endl; 

	
	return 0;
} 

int f(int A,int B){
	
	int sum=0;
	for(int i=A;i<=B;i++){
		sum+=i;
	}
	return sum;
}
