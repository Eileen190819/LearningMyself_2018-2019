#include<iostream>
#include<cstdlib>
#include<ctime> 
using namespace std;

int C(int,int);

int main(){
	int left=1,right=10000,A,answer;
	
	srand(time(NULL));
	answer = rand() % 10000;
	
	while(A!=answer){

		cout << "目前範圍" << left << "~" << right << ",請猜數字：";
		cin  >> A;
		
		if(A<left || A>right)	exit(1);
				
		if(A==answer)	break;
		else if(A>answer)	right=A;
		else if(A<answer)	left=A;	
	}	
	cout << "猜對了" << endl; 
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
