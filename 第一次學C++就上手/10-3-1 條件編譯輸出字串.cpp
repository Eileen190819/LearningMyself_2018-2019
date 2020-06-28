#include<iostream>
#define rice
#undef noodle 
using namespace std; 

int main()
{
	#ifdef rice
		cout << "I like rice.\n";
	#endif
	
	#ifndef noodle
		cout << "I don't like noodle.\n";
	#endif
	
	
	
	return 0;
}
