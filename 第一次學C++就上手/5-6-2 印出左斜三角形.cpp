#include<iostream>
using namespace std;

int main(){
	
	int num;
	cin >> num;
	for(int i=0;i<num;i++){
		
		for(int k=0;k<i;k++)
			cout << " ";
			
		for(int j=num;j>i;j--)
			cout << "*";
			
		cout << endl;
	}
		
	return 0;	
}
