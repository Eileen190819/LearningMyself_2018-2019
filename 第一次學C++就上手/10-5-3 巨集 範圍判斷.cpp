#include<iostream>
#include<cstring> 
#define range(a,b,x) (a<x && x<b) ?1:0 
using namespace std; 

int main()
{
	int x;
	char str[10];
	
	x = range(0,10,10);
	cout <<  ((x == 1) ?"在範圍內" :"沒在範圍內" ); 
	

	
	return 0;
}
