#include<iostream>
#include<string> 
using namespace std;

typedef struct staff{
	int id;
	string arrive;
	string leave;
} S;

int main()
{
	int choice , now=0 , id , i;
	S s[3];
	
	while( 1){
		
		cout << "�п�� (1)���d (2)�d�� (0)���}\n";
		cin >> choice;
		if(choice == 1){
			if(now != 3){
				cout << "�п�JID: ";
				cin >> s[now].id;
				cout << "��F�ɶ�: ";
				cin >> s[now].arrive;
				cout << "���}�ɶ�: ";
				cin >> s[now].leave;
				now++;
			}
			else{
				cout << "�W��w��" << endl;
			}
			cout << endl <<"------------------------------" << endl;				
	
		}
		else if(choice == 2){
			cout << "���d��ID: ";
			cin >> id;
			for(i=0 ; i<now ; i++)
				if(id == s[i].id){
					cout << "�W����F�ɶ�: " << s[i].arrive << endl
						 << "�W�����}�ɶ�: " << s[i].leave << endl; 
					break;
				}										
			if(i>=now || now==0){
				cout << "�d�L���H\n";
			}				
			cout << endl <<"------------------------------" << endl;	
		}	
		else{
			break;
		}
			
	}
	
	
	
	return 0;
}
