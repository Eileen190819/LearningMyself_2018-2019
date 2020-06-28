#include <iostream>
using namespace std;

class Pokemon
{
public:
    Pokemon(){
    	Name = "No Name";
    	Lv = HpMax = HpCurrent = 1;
	}
	Pokemon(string name,int lv,int hp){
		setData( name, lv, hp );
	}
	~Pokemon(){
		cout << Name << " has returned to the nature." << endl ;
	}
	void ShowInfo();
	void Attack(Pokemon &Target);
	void Defence( int n );
	void Cure();
	void setData(string name, int lv, int hp);
	
private:
	string Name;
	int Lv;
	int HpMax;
	int HpCurrent;
};
