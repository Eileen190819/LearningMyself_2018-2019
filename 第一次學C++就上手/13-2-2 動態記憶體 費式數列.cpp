#include<iostream>
using namespace std;

int f (int n, int cache[]){
	
	if(cache[n] == 0){

		if(n==0 || n==1)
			return 1;
		else
			return f(n-1,cache)+f(n-2,cache);
	}
}
 
int main()
{
	int i,n,*cache;
	
	cin >> n;
	cache = new int[n];
	
	for(i=0 ; i<n ; i++)
		cache[i] = 0;
	
	
	cout << "f( " << n << " ) =  " << f(n-1,cache); 
	
	delete [] cache;
	
	return 0;
}
