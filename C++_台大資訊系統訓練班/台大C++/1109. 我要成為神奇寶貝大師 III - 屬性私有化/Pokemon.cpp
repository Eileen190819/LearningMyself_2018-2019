#include<iostream>
#include "Pokemon.h"
using namespace std;
 
void Pokemon::ShowInfo()
{
    cout << "Name: " << name <<endl
         << "Lv: " << lv <<endl
         << "HP: " << hpcurrent << "/" << hpmax << endl <<endl;
}
 
void Pokemon::Attack(Pokemon &target)
{
 
    if(hpcurrent<=0){
        hpcurrent=0;
        cout << name << " is unable to attack." << endl;
 
        return ;
    }
 
    if(target.hpcurrent<=0){
        target.hpcurrent=0;
        cout << name << " cannot attack fainted target "
        << target.name << "." << endl ;
 
        return ;
    }
 
    cout << name << " Attack " << target.name
         << " " << lv << " Points." << endl;
		 
    target.defence(lv);
 
}
 
void Pokemon::defence(int atkp)
{
    hpcurrent -= atkp;
    if(hpcurrent<=0){
    	cout << name << " is fainted" << endl ;
        hpcurrent = 0;
    }
}
 
void Pokemon::cure()
{
    hpcurrent=hpmax;
}
 
void Pokemon::setData(string Name,int Lv,int Hp)
{
    
 
    if( Lv <=0 ){
        cout << "Lv setting error." << endl;
        Lv = 1;
    }  
 
    if( Hp <=0 ){
        cout << "Hp setting error." << endl;
        Hp = 1;
    }  
 
    name=Name;
    lv=Lv;
    hpmax=hpcurrent=Hp;   
 
 
}
