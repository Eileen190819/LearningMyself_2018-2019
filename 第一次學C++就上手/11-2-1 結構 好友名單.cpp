#include<iostream>
#include<string>
#include<stdio.h>
#define N 2
using namespace std;

struct Friend{
	string name;
	string tel; //�ϥ� int ���|�L�X����̫e�����Ʀr0 
	string bir;
}; 

void enter(Friend f[],int size){
	cout << "�W��: ";
	cin >> f[size].name;
	cout << "�q��: ";
	cin >> f[size].tel;
	cout << "�ͤ�: ";
	cin >> f[size].bir;

}

void show(Friend f[],int size){
	for(int i=0 ; i<size ; i++){
		cout << f[i].name << "���q��: " << f[i].tel << endl
			 << f[i].name << "���ͤ�: " << f[i].bir << endl
			 << "------------------------------" << endl;
	}

}

int main()
{
	int choice,now=0;
	Friend f[N];
	
	while(choice!=0){	
		
		cout << "�аݱz�n (1)��X�n�ͦW�� (2)�s�W�n�͸�� (0)���} " << endl;
		cin >> choice; 
		
		switch(choice){
			case 1:
				if(now != 0)
					show(f,now);
				else
					cout << "�ثe�S�����" << endl; 
				break;
			case 2:
				if(now == N)
					cout << "�W��w��" << endl; 
				else{
					enter(f,now);
					now++;
				}	
				break;
			case 0:
				break;
			fflush(stdin);
		}
		cout << endl;
	}		
	
	return 0;
 } 
 
 
 
