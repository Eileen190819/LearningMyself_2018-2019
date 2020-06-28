#include<iostream>
#define add(x,y)		(x) + (y)
#define minus(x,y)		(x) - (y)
#define multiply(x,y)	(x) * (y)
#define divide(x,y)		(double)(x) / (y) 
using namespace std; 

int main()
{
	int a,b;
	char chose;
	
	cin >> a >> chose >> b;
	
	switch(chose){
		case'+':
			cout << " x + y = " << add(a,b);
			break;
		case'-':
			cout << " x - y = " << minus(a,b);
			break;
		case'*':
			cout << " x * y = " << multiply(a,b);
			break;
		case'/':
			cout << " x / y = " << divide(a,b);
			break;
		default:
			break;
	}
	
	
	return 0;
}
