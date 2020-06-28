#include<iostream>
using namespace std;

int main()
{
	int a,num;

	cout << "您要轉換 (1)公尺->英吋 (2)公斤->英磅" << endl;
	cin >> a;
	cout << "請輸入欲轉換的數字：" << endl;
	cin >> num;
	
	if (a==1){
		cout << num << "公尺 = " << num*3.28 << " 英吋" << endl; 
	} 
	else if (a==2)
		cout << num << "公斤 = " << num*2.2 << " 英磅" << endl;
	else
		cout << "輸入錯誤" << endl; 
	 
	
	return 0;
}
