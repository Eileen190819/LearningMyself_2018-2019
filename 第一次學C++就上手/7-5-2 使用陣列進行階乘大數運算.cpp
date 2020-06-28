#include<iostream>

using namespace std;
#define size 50

int main(){
	
	short a[200];
	int i,k,now=0,carry=0;
	
	for(i=0;i<200;i++)
		a[i]=0;
	
	a[now]=1;
	
	for(k=2;k<=size;k++){
		carry=0;
		for(i=0;i<=now;i++){
			a[i]*=k;
			a[i]+=carry;
			if((a[i]/10)>=1){
				carry=a[i]/10;
				a[i]=a[i]%10;
				
				if(i==now)
					now++;
			}
			else 
				carry=0;
			
		}
	}
	
	cout << size << "! = ";
	for(i=now;i>=0;i--){
		cout << a[i];
	}
	
	
	
	return 0;
} 

