#include<iostream>
#include<string>
using namespace std;

char* encode(char* x)
{
	char *r = x;
	while(*x){
		*x += 13;
		*x++;
	}
	return r;
}
char* decode(char* x)
{
	char *r = x;
	while(*x){
		*x -= 13;
		*x++;
	}
	return r;			
}

int main()
{
	char a[10];
	int chose;
	
	cout << "請輸入字串: ";
	cin >> a;
	cout << "您要(1)encode  (2)decode\n";
	cin >> chose;
	
	if(chose == 1)
		cout << "after encode: " << encode(a);
	else
		cout << "after decode: " << decode(a);
		
	return 0;
 } 

