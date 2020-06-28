#include<iostream>
#include<cstdlib>
#include<ctime> 
using namespace std;


int main(){
	int a[20],i,key,from=0;
	
	srand(time(NULL));
	for(i=0;i<20;i++){
		a[i] = rand() % 10 +1;
	}
	
	cout << "½Ð·j´M±ý·j´Mªº­È(1~10):";
	cin >> key;

	
	while(1){

		for(i=0;i<20;i++){
			if(key==a[i]){
				cout << key << " found at a[" << i << "]=" << a[i] << endl; 
				from=1;
			}
		}
	
		if(from==0)	{
			cout << "key not found\n";
			break;
		}
		break;
	}	
	
	return 0;
} 

