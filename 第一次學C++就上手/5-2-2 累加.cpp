#include<iostream>
using namespace std;

int main()
{
	int n,total;
	
	while(1){
		cout << "輸入一整數：" ;
		cin >> n; 
		cout << "1+2+3+...+" << n << "=" ;
		total = 0;
		int i=1;
		while(i<=n){
			total += i;
			i++;
		}
		cout << total << endl;	
	}
	 
	
	return 0;
}
