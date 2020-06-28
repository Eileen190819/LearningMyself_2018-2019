#include<iostream>
#include<fstream>
#include<string.h>
#define file "12-3-2.txt"
using namespace std;

typedef struct FRIEND{
	string name;
	string phone;
	string bir;
}Friend;

void show(string filename){
	
	ifstream myfile(filename.c_str());
	Friend f;
	
	if(!myfile.is_open()){
		cout << "檔案開啟錯誤" << endl;
		return; 
	}
		
	while(!myfile.eof()){
		myfile >> f.name >> f.phone >> f.bir;
		if(!myfile.eof()){
			cout << "===========================" << endl
			<< "姓名: " << f.name << endl
			<< "電話: " << f.phone << endl
			<< "生日: " << f.bir << endl;			
		}
	}
	cout << "===========================" << endl;	
	
	myfile.close();	
}

void enter(string filename){
	
	ofstream myfile(filename.c_str(),ios::app); //要記得加ios::app(從檔案最後面開始寫入) 
	Friend f;
	
	if(!myfile.is_open()){
		cout << "檔案開啟錯誤" << endl;
		return; 
	}
	
	cout << "請輸入姓名: " ;
	cin >> f.name;
	myfile << f.name << " "; //要加空白,否則後面的電話生日字串會和姓名混在一起 
	cout << "請輸入電話: ";
	cin >> f.phone;
	myfile << f.phone << " ";
	cout << "請輸入生日: ";
	cin >> f.bir;
	myfile << f.bir << endl;	 
	
	myfile.close();	
}

int main()
{
	int num;
	
	while(1){
		cout << "請問你要 (1)輸出好友名單 (2)輸入好友名單 ";
		cin >> num;
		if(num == 1)
			show(file);
		else if(num == 2)
			enter(file);	
		else{
			cout << "輸入錯誤";
			break;
		}
					
		cout << endl;
	}
	
	return 0;
}
