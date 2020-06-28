#include<iostream>
#define SWAP(x,y,t)  (t=x,x=y,y=t)
using namespace std; 

int main()
{
	int x=10 , y=20 , t;
	SWAP(x,y,t);
	cout << "x= " << x << endl
		 << "y= " << y << endl;
}
