#include<iostream>
using namespace std;
 
class pkm
{
    public:
        pkm(){
            name="No Name";
            lv=hpmax=hpcurrent=1;                       
        }
 
        pkm(string Name,int Lv,int Hp){
            setdata(Name,Lv,Hp);           
        }
 
        ~pkm(){            
        }
        void showinfo();       
        void attack(pkm &target);       
        void defence(int atkp);   
        void cure();
        void setdata(string Name,int Lv,int Hp);   
 
    private:   
        string name;
        int lv;
        int hpmax;
        int hpcurrent;
        
};


void pkm::showinfo()
{
    cout << "Name: " << name <<endl
         << "Lv: " << lv <<endl
         << "HP: " << hpcurrent << "/" << hpmax << endl <<endl;
}
 
void pkm::attack(pkm &target) 
{
	
    if(hpcurrent<=0){
    	hpcurrent=0;
        cout << name << " Seriously Injured." << endl 
        	 << target.name << " Win, " << name << " Lose.\n"; 
        target.showinfo();
        pkm.showinfo();
        return ;
    }
 
    if(target.hpcurrent<=0){
    	target.hpcurrent=0;
        cout << target.name << " is unable to attack.\n";
        pkm.showinfo();
        target.showinfo();
        return ;
    }
 
    cout << name << " Attack " << target.name
         << " " << lv << " Points." << endl;
    target.defence(lv);
 
}
 
void pkm::defence(int atkp)
{
    hpcurrent -= atkp;
}
 
void pkm::cure()
{
    hpcurrent=hpmax;
}
 
void pkm::setdata(string Name,int Lv,int Hp)
{
    if( Lv <=0 ){
        cout << Name << " Lv is wrong\n" << endl;
        Lv = 1;
    }   
 
    if( Hp <=0 ){
        cout << Name << " Hp is wrong\n" << endl;
        Hp = 1;
    }   
	
	name=Name;
    lv=Lv;
    hpmax=hpcurrent=Hp;    
 
 
}
 
 
int main()
{
    pkm p1("Pikachiu",20,70); 
    pkm p2("Mewtwo",30,60);
    
   	
		p1.attack(p2);
		p2.attack(p1);
		p1.attack(p2);
		p2.attack(p1);
		p1.attack(p2);
		p2.attack(p1);
    
    
	

 
    return 0;
}
