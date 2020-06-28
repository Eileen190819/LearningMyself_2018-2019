#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ifstream myfile("12-2-4.txt");
	if(!myfile.is_open()){
		cout << "檔案無法開啟" << endl;
		return 1; 
	} 
	
	long begin,end;
	char ch;
	
	begin = myfile.tellg();
	myfile.seekg(0, ios::end); 
	end = myfile.tellg();
	myfile.seekg(0, ios::beg);
	
	cout << "檔案大小: " << end-begin << endl;
	cout << "檔案內容: " << endl;
	while(!myfile.eof()){
		myfile.get(ch);
		if(!myfile.eof())
			cout << ch;
	} 
	
	return 0; 
} 
