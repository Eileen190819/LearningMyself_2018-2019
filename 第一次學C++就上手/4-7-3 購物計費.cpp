#include<iostream>
using namespace std;

int main()
{
	int m,a,b,c;
	
	cin >> m >> a >> b >> c;
	if(a*199+b*23+c*85 > m)
		cout << "�ٮt " <<  (a*199+b*23+c*85)-m << "��" <<endl;
	else
		cout << "�ѤU " <<  m-(a*199+b*23+c*85) << "��" <<endl;
	
	 
	
	return 0;
}
