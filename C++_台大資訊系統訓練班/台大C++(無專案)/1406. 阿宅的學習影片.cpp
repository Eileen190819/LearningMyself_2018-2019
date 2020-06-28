#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin >> b >> a ;
	int now=a,t=0;
	/*
	if(b>a){
		t=(b-a)/5;
		now=a+5*t;
	}	
	else{
		t=(a-b)/2;
		now=a-2*t;
	}
	*/
	while(now!=b){
		
		if(now<b){
			now+=5;
			t++;
		}	
		else if(now>b){
			now-=2;
			t++;
		} 	
				
	} 
	cout << t; 
	
	return 0;
}
