#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ifstream origin_file("1.PNG", ios::binary);
	ofstream copied_file("1_copy.PNG", ios::binary | ios::trunc);
	
	if(!origin_file.is_open() || !copied_file.is_open()){
		cout << "�ɮ׶}�ҥ���" << endl;
		return 1; 
	}
	
	char ch;
	while(!origin_file.eof()){
		origin_file.get(ch);
		copied_file.put(ch);
	}
	
	origin_file.close();
	copied_file.close();
	cout << "�ɮ׽ƻs�n�F" << endl;
	
	return 0; 
} 
