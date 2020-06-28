#include<iostream>
using namespace std;

int main()
{
	for(int i=1;i<=100;i++){
		int j=1;
		int flag=0;
		while(j<=i){
			if(!(i%j))	flag++;
			j++;
		}
		if(flag==2)	cout << i << "¬O½è¼Æ" << endl; 
	}
		 
	
	return 0;
}
