#include<iostream>
using namespace std;


int main(){
	
	int i, s[5], x, f=0, k=1;
	for(i=0;i<5;i++){

		cout << "�п�J��{����" << i << "�������Y��: ";
		cin >>  s[i];
	}	
	cout << "�п�J���p�⪺�ܼƭ�: ";
	cin >> x;
	
	for(i=0;i<5;i++){
		k=1;
		for(int j=0;j<i;j++){			
			k*=x;
		}	
		cout << "k=" <<k << endl;
		
		f += k*s[i];
	}
	
	cout << "f(" << x << ")= " << f ;
	
	
	
	return 0;
} 

