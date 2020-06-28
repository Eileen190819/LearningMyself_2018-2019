#include<iostream>

using namespace std;

class Square
{
public:
	int area(){
		return len*len;
	}
	
	int len;
};

int main()
{
	int n1, n2;
	cin >> n1 >> n2;

	Square s1,s2;
	s1.len = n1;
	s2.len = n2;
	
	cout << "Square1 len: "<<s1.len
		 << " area: " << s1.area()<<endl;
	cout << "Square2 len: "<<s2.len
		 << " area: " << s2.area()<<endl;
	
	return 0;
}
