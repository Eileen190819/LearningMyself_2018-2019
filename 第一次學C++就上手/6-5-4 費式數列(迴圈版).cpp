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
	
	int sum,pre=0,fi=1;
	
	if(A==1 || A==2)
		return 1;
	
	for(int i=1;i<A;i++){
		sum=pre+fi;
		pre=fi;
		fi=sum;			
	}	
	return sum;
}
