#include<iostream>
using namespace std;

void Mystrcpy(char *, char *);

int main()
{
	char a[ ] = "I like cat";
	char b[ ] = "I am good";
	Mystrcpy(a, b);
	cout << b;
			
	
	return 0;
} 

void Mystrcpy(char *a, char *b){
	
	int i;
	
	for(i=0 ; *(a+i) != '\0' ; i++){
		*(b+i) = *(a+i);
	}
	*(b+i) = '\0';
	
}
