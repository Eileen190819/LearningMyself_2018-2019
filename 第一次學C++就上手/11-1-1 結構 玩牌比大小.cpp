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
	string f[ ] = { "梅花" , "方塊" , "愛心" , "黑桃"};
	int num[ ] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	
	cout << "想比 (1)大 還是 (2)小 ?   ";
	cin >> chose;
	srand(time(NULL));
	
	while (chose!=3){		
		
		ME.flower = rand()%4 ;
		ME.num = rand()%13 ;
		
		YOU.flower = rand()%4;
		YOU.num = rand()%13 ;
		
		cout << "發牌中..." << endl << "您拿到的牌是 " << f [ ME.flower ] << num [ ME.num ] << endl;
		cout << "電腦拿到的牌是 " << f [ YOU.flower ] << num [ YOU.num ] << endl;
		
		if(chose == 1){
			if( ME.flower + ME.num*10 > YOU.flower + YOU.num*10)
				cout << "您贏了" << endl;
			else if( ME.flower + ME.num*10 < YOU.flower + YOU.num*10)
				cout << "您輸了" <<endl;
			else
				cout << "平手" << endl; 
		}
		else{
			if( ME.flower + ME.num*10 > YOU.flower + YOU.num*10)
				cout << "您輸了" << endl;
			else if( ME.flower + ME.num*10 < YOU.flower + YOU.num*10)
				cout << "您贏了" <<endl;
			else
				cout << "平手" << endl; 
		}
		cout << endl;
		cout << "------------------------------------------" << endl;
			
		cout << "再玩一次嗎? (1)比大 (2)比小 (3)不玩了  ";
		cin >> chose; 
	
	}	 

	
	return 0;
}
