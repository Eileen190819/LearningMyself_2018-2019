#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ifstream myfile("12-2-4.txt");
	if(!myfile.is_open()){
		cout << "�ɮ׵L�k�}��" << endl;
		return 1; 
	} 
	
	long begin,end;
	char ch;
	
	begin = myfile.tellg();
	myfile.seekg(0, ios::end); 
	end = myfile.tellg();
	myfile.seekg(0, ios::beg);
	
	cout << "�ɮפj�p: " << end-begin << endl;
	cout << "�ɮפ��e: " << endl;
	while(!myfile.eof()){
		myfile.get(ch);
		if(!myfile.eof())
			cout << ch;
	} 
	
	return 0; 
} 
