#include<iostream>
using namespace std;

int SQRT(int);

int main(){
	int A;
	
	cout << "�п�J��ơG";
	cin  >> A ;
	cout << "�}�ڸ��G" << SQRT(A) << endl; 
	
	return 0;
} 

int SQRT(int A){
	
	int i=1;
	
	if(A<1)
		return -1;
		
	for(i=1;i<A;i++)
		if(i*i>A) break;
		
	if((i*i-A) < (A-(i-1)*(i-1)))
		return i;
	else
		return i-1;
			
}
