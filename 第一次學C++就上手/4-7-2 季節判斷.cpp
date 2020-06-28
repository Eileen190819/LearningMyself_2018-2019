#include<iostream>
using namespace std;

int main()
{
	int m;
	
	cout << "請輸入月份：" ; 
	cin >> m;
	
	if(1<=m && m<=3)
		cout << m << "月是春天" <<endl;
	else if (/*4<=m && */m<=6)
		cout << m << "月是夏天" <<endl;
	else if (/*7<=m && */m<=9)
		cout << m << "月是秋天" <<endl;
	else if (/*10<=m && */m<=12)
		cout << m << "月是冬天" <<endl;
	else  
		cout << "輸入錯誤" << endl; 
	
	return 0;
}
