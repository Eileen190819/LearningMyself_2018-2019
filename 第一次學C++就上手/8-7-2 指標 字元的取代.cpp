#include<iostream>
using namespace std;

void sub(char *, char, char);

int main()
{
	
	char a[ ] = "This is fun", x , y ;
	cout << a << endl;
	cin >> x >> y;
	
	sub ( a , x , y );
	cout << a;
			
	
	return 0;
} 

void sub(char *a, char x, char y){
	

	while(*a!='\0'){
		if(*a == x)
			*a = y;
		a++;
	}
	
}
