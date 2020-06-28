#include<iostream>
using namespace std;

int main()
{
	int a, b, M, m,i,j;
	
	cout << "叫块ㄢタ俱计" ;
	cin >> a >> b;
	
	for (i=1; i<a || i<b ; i++){
		if(a%i || b%i)
			continue;
		M=i;
	}
	
	if(a>b)
		j=a;
	j=b;
	while (1){
		
		if(!(j%a) && !(j%b)){
			m=j;
			break;
		}
		j++;	
	}
	
	
	cout << a << "㎝" << b << "ぇ程そ计" << M << endl
		 << a << "㎝" << b << "ぇ程そ计" << m << endl;
	 
	
	return 0;
}
