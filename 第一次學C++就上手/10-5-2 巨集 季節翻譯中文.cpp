#include<iostream>
#include<cstring> 

#define spring	"�K��"
#define summer	"�L��"
#define autumn	"���"
#define	winter	"�V��"
 
using namespace std; 

int main()
{
	char str[10];
	cin >> str;
	
	#ifdef spring
		if(!strcmp(str,"spring"))
			cout << "spring => " << spring;
		else
			cout << "null";
	#endif
	
	return 0;
}
