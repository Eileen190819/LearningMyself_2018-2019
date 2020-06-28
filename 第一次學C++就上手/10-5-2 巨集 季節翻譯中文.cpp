#include<iostream>
#include<cstring> 

#define spring	"春天"
#define summer	"夏天"
#define autumn	"秋天"
#define	winter	"冬天"
 
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
