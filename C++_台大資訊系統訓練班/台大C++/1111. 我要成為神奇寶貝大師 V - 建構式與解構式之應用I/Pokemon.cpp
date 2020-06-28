#include <iostream>
#include "Pokemon.h"
 
using namespace std;

Pokemon::Pokemon(){
	Name = "No Name";
	Lv = HpMax = HpCur = 1;
	items = new string [Lv];
	itemNum = 0;
};
Pokemon::Pokemon(string na, int lv, int hp){
	setData(na,lv,hp);

};
Pokemon::~Pokemon(){
	
	cout << Name << " has returned to the nature." << endl ;
	delete []items;
};	
void Pokemon::addItem(string item){
	if(itemNum==Lv){
		cout << Name <<" is full, cannot carry " << item << "." << endl;
		return;
	}
	items[itemNum] = item;
	itemNum ++;
	
};
void Pokemon::ShowInfo(){
	cout << "Name: " << Name << endl <<
			"Lv: "	 << Lv	 << endl <<
			"HP: "	 << HpCur << "/" << HpMax << endl <<
			"Items: " ;
	for (int i=0;i<itemNum;i++){
		cout << items[i] << " " ;
	}
	cout << endl <<endl ;
};
//void Pokemon::Attack(Pokemon &tg);
//void Pokemon::Defence(int atkp);
//void Pokemon::Cure();
void Pokemon::setData(string na, int lv, int hp){
	if(lv<1){
		
		cout << "Lv setting error." << endl;
		lv = 1;
	}
	if(hp<1){
		
		cout << "Hp setting error." << endl;
		hp = 1;
	}
	Name = na;
	Lv = lv;
	HpCur = HpMax = hp;
	items = new string [lv];
	itemNum = 0;
};
