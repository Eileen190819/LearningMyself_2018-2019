#include<iostream>
using namespace std;

void swap (int *, int *);

int main()
{
	int a,b;
	cin >> a >> b;
	swap(&a, &b);
	cout << "a= " << a << endl << "b= " << b;
	
	return 0;
} 

void swap (int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;	
	
}
