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
		cout << "�ɮ׶}�ҿ��~" << endl;
		return; 
	}
		
	while(!myfile.eof()){
		myfile >> f.name >> f.phone >> f.bir;
		if(!myfile.eof()){
			cout << "===========================" << endl
			<< "�m�W: " << f.name << endl
			<< "�q��: " << f.phone << endl
			<< "�ͤ�: " << f.bir << endl;			
		}
	}
	cout << "===========================" << endl;	
	
	myfile.close();	
}

void enter(string filename){
	
	ofstream myfile(filename.c_str(),ios::app); //�n�O�o�[ios::app(�q�ɮ׳̫᭱�}�l�g�J) 
	Friend f;
	
	if(!myfile.is_open()){
		cout << "�ɮ׶}�ҿ��~" << endl;
		return; 
	}
	
	cout << "�п�J�m�W: " ;
	cin >> f.name;
	myfile << f.name << " "; //�n�[�ť�,�_�h�᭱���q�ܥͤ�r��|�M�m�W�V�b�@�_ 
	cout << "�п�J�q��: ";
	cin >> f.phone;
	myfile << f.phone << " ";
	cout << "�п�J�ͤ�: ";
	cin >> f.bir;
	myfile << f.bir << endl;	 
	
	myfile.close();	
}

int main()
{
	int num;
	
	while(1){
		cout << "�аݧA�n (1)��X�n�ͦW�� (2)��J�n�ͦW�� ";
		cin >> num;
		if(num == 1)
			show(file);
		else if(num == 2)
			enter(file);	
		else{
			cout << "��J���~";
			break;
		}
					
		cout << endl;
	}
	
	return 0;
}
