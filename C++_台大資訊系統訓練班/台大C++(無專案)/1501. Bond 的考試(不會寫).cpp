#include<iostream>
using namespace std;

int main(){
	char num[8];
	int i;
	
	for(i=0;i<8;i++){
		cin >> num[i];
		if(num[i]=='\0')
			break;
	}	
	
	for(i=0;i<8;i++){	
		if(num[i]==7){
			cout << "YES\n";
			break;
		}		
		else if(num[i]=='\0'){
			cout << "NO\n";
			break;
		}			
	}	
	
	
	return 0;
} 
