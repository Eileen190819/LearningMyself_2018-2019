#include<iostream>
using namespace std;

int main()
{
	int m;
	
	cout << "�п�J����G" ; 
	cin >> m;
	
	if(1<=m && m<=3)
		cout << m << "��O�K��" <<endl;
	else if (/*4<=m && */m<=6)
		cout << m << "��O�L��" <<endl;
	else if (/*7<=m && */m<=9)
		cout << m << "��O���" <<endl;
	else if (/*10<=m && */m<=12)
		cout << m << "��O�V��" <<endl;
	else  
		cout << "��J���~" << endl; 
	
	return 0;
}
