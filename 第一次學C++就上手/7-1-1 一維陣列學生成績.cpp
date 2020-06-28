#include<iostream>
using namespace std;


int main(){
	
	int i, stuscore[10], total=0;
	for(i=1;i<=10;i++){

		cout << "請輸入學生" << i << "成績：";
		cin >> stuscore[i-1];
		total+=stuscore[i-1];
	}	 
	cout << "平均成績為:" << (double)total/10 << endl; 
	
	return 0;
} 

