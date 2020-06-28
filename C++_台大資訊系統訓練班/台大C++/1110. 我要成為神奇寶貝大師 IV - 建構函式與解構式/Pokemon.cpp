#include <iostream>
#include "Pokemon.h"
using namespace std;

void Pokemon::ShowInfo(){
	cout << "Name: " << Name << endl <<
			"Lv: "	<< Lv	<< endl <<
			"HP: "	<< HpCurrent << "/" << HpMax << endl << endl ; 
};
void Pokemon::Attack(Pokemon &Target){
	if(HpCurrent<=0){
    	HpCurrent=0;
        
        return ;
    }
 
    if(Target.HpCurrent<=0){
    	Target.HpCurrent=0;
        
        return ;
    }
    Target.Defence(Lv);
 
};
void Pokemon::Defence( int n ){
	HpCurrent -= n ;
	if (HpCurrent < 0)
		HpCurrent = 0;
};
void Pokemon::Cure(){
	HpCurrent = HpMax;
};
void Pokemon::setData(string name, int lv, int hp){
	if (name == ""){
		name = "No Name";
		cout << "Name can't be empty." << endl ;
	}
	if (lv < 1){
		lv = 1;
		cout << "Lv setting error." << endl ;
	}
	if (hp < 1){
		hp = 1;
		cout << "Hp setting error." << endl ;
	}
	Name = name;
	Lv = lv;
	HpCurrent = HpMax = hp;
};
	
