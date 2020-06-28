#include<iostream>
using namespace std;

int main(){
	int head,leg,ch,rab;
	cin >> head >> leg;
	
	int i=(leg-2*head)%2;
	if(i==0 && (leg-2*head)/2>0)
		cout << "YES\n" << head-(leg-2*head)/2 << " " << (leg-2*head)/2 << endl;
	else
		cout << "NO\n";
	
	return 0;
} 
