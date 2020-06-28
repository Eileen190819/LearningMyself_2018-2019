#include<iostream>
using namespace std;

int f(int,int);
int main(){
	int X,n;
	cin  >> X >> n;
	cout << X << "^" << n << "=" << f(X,n); 
	
	return 0;
} 

int f(int X,int n){
	
	int sum=1;
	for(int i=0;i<n;i++){
		sum*=X;
	}
	return sum;
}
