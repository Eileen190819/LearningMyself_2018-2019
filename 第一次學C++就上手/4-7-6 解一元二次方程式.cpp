#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,b,c;
	
	cout << "ax^2 + bx + c = 0\n" << "�Ш̧ǿ�Ja, b, c\n";
	cin >> a >> b >> c ;
	cout << "���׬O�G" ;
	
 	if (b*b - 4*a*c ==0 )
	 	cout <<  (-1)*b/(2*a) << endl;
	else if (b*b - 4*a*c > 0 )
		cout << ((-1)*b + sqrt(b*b-4*a*c))/2/a << " " << ((-1)*b - sqrt(b*b-4*a*c))/2/a << endl;
	else
		cout << "�L��" << endl; 
		 
	
	 
	
	return 0;
}
