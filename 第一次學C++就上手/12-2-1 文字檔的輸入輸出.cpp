#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch;
	
	ifstream fin;
	fin.open("2018�ݼv���i��.txt");
	
	if(!fin.is_open()){
		cout << "�ɮ׶}�ҥ���" << endl;
		return 1; 
	}
	
	while(!fin.eof()){
		fin.get(ch);
		cout << ch;
	}
	fin.close();
	
	return 0;
 } 
