#include<iostream>
using namespace std;

int f (int, int[]);

int main()
{
	int x,a[50];
	
	for(int i=0;i<50;i++)
		a[i]=0;	
	
	cin >> x;
	cout << "f(" << x << ")= " << f(x-1,a);
	
	return 0;
} 

int f(int x, int a[])
{
		
	if(x==0 || x==1)	
		return 1;
	else	
		a[x]=f(x-1,a)+f(x-2,a);
		
	
	return a[x];
}
