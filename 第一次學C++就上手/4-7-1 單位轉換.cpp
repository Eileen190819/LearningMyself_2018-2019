#include<iostream>
using namespace std;

int main()
{
	int a,num;

	cout << "�z�n�ഫ (1)����->�^�T (2)����->�^�S" << endl;
	cin >> a;
	cout << "�п�J���ഫ���Ʀr�G" << endl;
	cin >> num;
	
	if (a==1){
		cout << num << "���� = " << num*3.28 << " �^�T" << endl; 
	} 
	else if (a==2)
		cout << num << "���� = " << num*2.2 << " �^�S" << endl;
	else
		cout << "��J���~" << endl; 
	 
	
	return 0;
}
