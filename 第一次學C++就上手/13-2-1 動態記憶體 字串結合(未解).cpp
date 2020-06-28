#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int i=0,j=0;
	
	string str1,str2;
	char *p;
	
	cin >> str1 >> str2;
	p = (char*)malloc(str1.size() + str2.size() +1) * sizeof(char)); //這一行都看不懂 
	
	while(*(str1+i)){
		*(p+i) = *(str1+i);
		i++;
	}
	
	while(*(str2+j)){
		*(p+i) = *(str2+j);
		i++;
		j++;
	}
	
	*(p+i) = '\0'; 
	
	puts(p);
	
	free(p);
	
	return 0;
 } 
