#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ifstream origin_file("1.PNG", ios::binary);
	ofstream copied_file("1_copy.PNG", ios::binary | ios::trunc);
	
	if(!origin_file.is_open() || !copied_file.is_open()){
		cout << "檔案開啟失敗" << endl;
		return 1; 
	}
	
	char ch;
	while(!origin_file.eof()){
		origin_file.get(ch);
		copied_file.put(ch);
	}
	
	origin_file.close();
	copied_file.close();
	cout << "檔案複製好了" << endl;
	
	return 0; 
} 
