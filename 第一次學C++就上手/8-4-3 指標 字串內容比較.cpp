#include<iostream>
using namespace std;

int add(int, int);

int main()
{
	int (*p)(int x, int y), x;
	p = add;
	x = (*p)(5, 10);
	cout << x;
	
		
	
	return 0;
} 

int add(int a, int b){
	return a + b ;
}
