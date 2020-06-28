#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch;
	
	ifstream fin;
	fin.open("2018看影片進度.txt");
	
	if(!fin.is_open()){
		cout << "檔案開啟失敗" << endl;
		return 1; 
	}
	
	while(!fin.eof()){
		fin.get(ch);
		cout << ch;
	}
	fin.close();
	
	return 0;
 } 
