#include<iostream>
using namespace std;


int main(){
	
	int i, stuscore[10], total=0;
	for(i=1;i<=10;i++){

		cout << "�п�J�ǥ�" << i << "���Z�G";
		cin >> stuscore[i-1];
		total+=stuscore[i-1];
	}	 
	cout << "�������Z��:" << (double)total/10 << endl; 
	
	return 0;
} 

