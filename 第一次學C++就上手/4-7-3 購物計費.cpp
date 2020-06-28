#include<iostream>
using namespace std;

int main()
{
	int m,a,b,c;
	
	cin >> m >> a >> b >> c;
	if(a*199+b*23+c*85 > m)
		cout << "還差 " <<  (a*199+b*23+c*85)-m << "元" <<endl;
	else
		cout << "剩下 " <<  m-(a*199+b*23+c*85) << "元" <<endl;
	
	 
	
	return 0;
}
