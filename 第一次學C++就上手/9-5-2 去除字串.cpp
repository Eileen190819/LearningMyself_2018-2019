#include<iostream>
#include<cstring>
using namespace std;

void exclude (char* x , char* y)
{
	int i , y_len = strlen(y);
	
	for(i=0 ; i<(int)strlen(x)-strlen(y) ; i++){
		if(!strncmp(x+i , y , strlen(y))){
			strcpy(x+i,x+i+strlen(y));
			i--;	//���o��S�o��,���G���@��,�����γ~����		
		}
	}
}


int main()
{
	
	char s1[] = "What a wonderful world!";
	char s2[] = "wonderful ";
	
	exclude(s1 , s2);
	cout << s1;
	
	return 0;
 } 

