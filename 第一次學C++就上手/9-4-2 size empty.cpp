#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1;
	string s2 = "Hello!";
	
	if(s1.empty())
		cout << "string s1 is empty.\n";
	
	cout << "string s2 is " << s2.size() << " long.\n"; 
	cout << "string s1 = " << s1 << endl << "string s2 = " << s2 << endl;
	
	return 0;
 } 
