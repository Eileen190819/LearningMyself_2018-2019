#include <iostream>

using namespace std;

void printAry(int n, string *ptr){
	//¿é¥X 
	for(int i=0;i<n;i++){
		cout << ptr[i] << " ";
	}
	cout << endl;
}
int main(int argc, char** argv) {
	
	string *ptr;
	int n;
	cin >> n; 
	
	ptr = new string[n];
	//¿é¤J 
	for(int i=0;i<n;i++){
		cin >> ptr[i];
	}
	//±Æ§Ç 
	for(int i=n;i>1;i--){
		int flag = 1;
		for(int j=0;j<i-1;j++){
			if(ptr[j]>ptr[j+1]){
				string tmp = ptr[j];
				ptr[j] = ptr[j+1];
				ptr[j+1] = tmp;
				flag = 0;
			}
		}
		printAry(n,ptr);
		if(flag)
			break;
	}		
	printAry(n,ptr);
	delete [] ptr;
	
	return 0;
}
