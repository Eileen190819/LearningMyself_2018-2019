#include<iostream>
#include<string> 
#include<cstdlib>
#include<time.h> 
using namespace std;

typedef struct card{
	int flower;
	int num;
} CARD;

int main()
{
	int chose;
	CARD ME,YOU;		
	string f[ ] = { "����" , "���" , "�R��" , "�®�"};
	int num[ ] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	
	cout << "�Q�� (1)�j �٬O (2)�p ?   ";
	cin >> chose;
	srand(time(NULL));
	
	while (chose!=3){		
		
		ME.flower = rand()%4 ;
		ME.num = rand()%13 ;
		
		YOU.flower = rand()%4;
		YOU.num = rand()%13 ;
		
		cout << "�o�P��..." << endl << "�z���쪺�P�O " << f [ ME.flower ] << num [ ME.num ] << endl;
		cout << "�q�����쪺�P�O " << f [ YOU.flower ] << num [ YOU.num ] << endl;
		
		if(chose == 1){
			if( ME.flower + ME.num*10 > YOU.flower + YOU.num*10)
				cout << "�zĹ�F" << endl;
			else if( ME.flower + ME.num*10 < YOU.flower + YOU.num*10)
				cout << "�z��F" <<endl;
			else
				cout << "����" << endl; 
		}
		else{
			if( ME.flower + ME.num*10 > YOU.flower + YOU.num*10)
				cout << "�z��F" << endl;
			else if( ME.flower + ME.num*10 < YOU.flower + YOU.num*10)
				cout << "�zĹ�F" <<endl;
			else
				cout << "����" << endl; 
		}
		cout << endl;
		cout << "------------------------------------------" << endl;
			
		cout << "�A���@����? (1)��j (2)��p (3)�����F  ";
		cin >> chose; 
	
	}	 

	
	return 0;
}
