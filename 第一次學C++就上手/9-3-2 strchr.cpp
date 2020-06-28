#include<iostream>
#include<fstream>
#include<cstring> 
using namespace std;

int main()
{
	char a[] = "String is fun! ";
	char key;
	cout << a << endl << "Which character?  ";
	cin >> key;
	if(strchr(a,key))
		cout << "Found " << key << ". Is here -->" << strchr(a,key);
	else
		cout << "Can't find " << key;
	
	return 0;
 } 

