#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch;
	
	ofstream my_write_file("12-2-2.txt");

	if(!my_write_file.is_open()){
		cout << "�ɮ׶}�ҥ���" << endl;
		return 1; 
	}
	
	my_write_file << "�Ĥ@��" << endl << "�ĤG��" << endl; 
	
	ifstream my_read_file("12-2-2.txt");
	
	while(!my_read_file.is_open()){
		cout << "�ɮ׶}�ҥ���" << endl;
		return 1; 
	}
	
	string input_string;
	while(!my_read_file.eof()){
		input_string = " ";
		my_read_file >> input_string;
		if(!my_read_file.eof())
			cout << input_string << endl;
	}
	
	return 0;
 } 
