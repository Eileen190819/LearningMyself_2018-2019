#include<iostream>
using namespace std;
 
int main(){
 
    int num;
    cin >> num;
 
    for(int i=0;i<num/2+1;i++){
        for(int j=num/2;j>i;j--)
            cout << " ";
 
        for(int k=0;k<2*i+1;k++)
            cout << "*";
 
        cout << endl;
    }
    for(int i=0;i<num/2;i++){
    	for(int j=0;j<i+1;j++)
    		cout << " ";
    	for(int k=num-2;k>2*i;k--)
    		cout << "*";
    	cout << endl;
	}
 
    return 0;   
}
