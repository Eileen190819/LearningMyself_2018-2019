#include<iostream>
using namespace std;

int main()
{
	int a, b, M, m,i,j;
	
	cout << "�п�J��ӥ���ơG" ;
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
	
	
	cout << a << "�M" << b << "���̤j���]��" << M << endl
		 << a << "�M" << b << "���̤p������" << m << endl;
	 
	
	return 0;
}
