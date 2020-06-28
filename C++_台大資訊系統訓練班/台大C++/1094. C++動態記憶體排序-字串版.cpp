#include<iostream>
using namespace std;

void printAry(int n, string *ptr){
	for(int i=0;i<n;i++){
		cout << ptr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int n;
	cin >> n ;
	
	string *ptr = new string[n];
	for(int i=0;i<n;i++){
		cin >> ptr[i];
	}
	
	string tmp;
	for(int j=n;j>1;j--){
		int flag = 1;
		for(int i=0;i<j-1;i++){
			if (ptr[i]>ptr[i+1]){
				tmp = ptr[i+1];
				ptr[i+1] = ptr[i];
				ptr[i] = tmp;
				flag = 0;				
			}			
		}
		if(flag)	
			break;
		
		
	}
	
	printAry(n,ptr);
	
	delete [] ptr;
	return 0;
}
