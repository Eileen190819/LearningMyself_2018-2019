#include<iostream>
using namespace std;

int main(){
	
	int num;
	int ans=27;
	
	while(1){ 
		cout << "�Цb1~100�����q�@�ӼƦr�G" ;
		cin >>  num;
		if(num>ans){
			if(num-ans <= 5)
				cout << "�w�g���񵪮פF" << endl;
			else
				cout << "�q�o�Ӥj�F" << endl; 
		}
		else if(num<ans){
			if(ans-num <= 5)
				cout << "�w�g���񵪮פF" << endl;
			else
				cout << "�q�o�Ӥp�F" << endl; 
		}
		else{

		cout << "���T����" << endl ;
		break;
		}	
			
			
	}
		
	return 0;	
}
