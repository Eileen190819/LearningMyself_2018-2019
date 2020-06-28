#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,b,c;
	
	cout << "ax^2 + bx + c = 0\n" << "請依序輸入a, b, c\n";
	cin >> a >> b >> c ;
	cout << "答案是：" ;
	
 	if (b*b - 4*a*c ==0 )
	 	cout <<  (-1)*b/(2*a) << endl;
	else if (b*b - 4*a*c > 0 )
		cout << ((-1)*b + sqrt(b*b-4*a*c))/2/a << " " << ((-1)*b - sqrt(b*b-4*a*c))/2/a << endl;
	else
		cout << "無解" << endl; 
		 
	
	 
	
	return 0;
}
