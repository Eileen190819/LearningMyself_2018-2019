#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1 = "Hello!";
	string s2 = "Hello!";
	
	if(s1 == s2)
		cout << "string s1 and s2 are the same.\n";
	else
		cout << "Not the same.\n";
	
	
	cout << "string s1 = " << s1 << endl << "string s2 = " << s2 << endl;
	
	return 0;
 } 
