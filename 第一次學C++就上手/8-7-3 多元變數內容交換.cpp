#include<iostream>
using namespace std;

void swap (void* , void* , int); 

int main()
{
	int a=3 , b=5;
	double x=3.3 , y=5.5;
	swap ( &a , &b , sizeof(int) );
	swap ( &x , &y , sizeof(double) );
	cout << "a= " << a << endl
		 << "b= " << b << endl
		 << "x= " << x << endl
		 << "y= " << y << endl;
	  
	return 0;
 } 
 
 void swap (void* p , void* q , int size)
 {
 	char tmp;
 	char *a = (char *)p; //學起來!! 將void型態轉換為char指標型態 
 	char *b = (char *)q;
 	for(int i=0 ; i<size ; a++,b++,i++)	{
 		tmp = *a;
 		*a = *b;
 		*b = tmp;
	 }
 	
 	
 }
