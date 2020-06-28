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
		
		cout << "請選擇 (1)打卡 (2)查詢 (0)離開\n";
		cin >> choice;
		if(choice == 1){
			if(now != 3){
				cout << "請輸入ID: ";
				cin >> s[now].id;
				cout << "到達時間: ";
				cin >> s[now].arrive;
				cout << "離開時間: ";
				cin >> s[now].leave;
				now++;
			}
			else{
				cout << "名單已滿" << endl;
			}
			cout << endl <<"------------------------------" << endl;				
	
		}
		else if(choice == 2){
			cout << "欲查詢ID: ";
			cin >> id;
			for(i=0 ; i<now ; i++)
				if(id == s[i].id){
					cout << "上次到達時間: " << s[i].arrive << endl
						 << "上次離開時間: " << s[i].leave << endl; 
					break;
				}										
			if(i>=now || now==0){
				cout << "查無此人\n";
			}				
			cout << endl <<"------------------------------" << endl;	
		}	
		else{
			break;
		}
			
	}
	
	
	
	return 0;
}
