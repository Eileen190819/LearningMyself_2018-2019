#include<iostream>
using namespace std;
 
class pkm
{
    public:
        pkm(){
            name=new string[num];
            lv=new int[num];
            hpmax=new int[num];
            hpcurrent=new int[num];                       
        }
 
        pkm(string Name,int Lv,int Hp){
            setdata(Name,Lv,Hp);           
        }
 
        ~pkm(){
            delete []name;
            delete []lv;
            delete []hpmax;
            delete []hpcurrent;
 
        }
        void showinfo();       
        void attack(pkm &target);       
        void defence(int atkp);   
        void cure();
        void setdata(string Name,int Lv,int Hp);   
 
    private:   
        string *name;
        int *lv;
        int *hpmax;
        int *hpcurrent;
        
};


void pkm::showinfo()
{
    cout << "Name: " << name[num] <<endl
         << "Lv: " << lv[num] <<endl
         << "HP: " << hpcurrent[num] << "/" << hpmax[num] << endl <<endl;
}
 
void pkm::attack(pkm &target) //name[num]»Ý­n­×¥¿ 
{
    if(hpcurrent[num]<=0){
        hpcurrent[num]=0;
        cout << name[num] << " Seriously Injured." << endl 
        	 << target.name << "Win, " << name[num] << " Lose.\n";        
        return;
    }
 
    if(target.hpcurrent[num]<=0){
        target.hpcurrent[num]=0;
        cout << target.name << " is unable to attack.\n";
        return;
    }
 
    cout << name[num] << " Attack " << target.name
         << " " << lv << " Points." << endl;
    target.defence(lv[num]);
 
}
 
void pkm::defence(int atkp)
{
    hpcurrent[num] -= atkp;
}
 
void pkm::cure()
{
    hpcurrent[num]=hpmax[num];
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
	
	name[num]=Name;
    lv[num]=Lv;
    hpmax[num]=hpcurrent[num]=Hp;    
 
    num++;
}
 
 
int main()
{
    int num;
 
    cin >> num;
    pkm *mine=new pkm[num];
 
    string *n=new string[num];
    int *l= int[num];
    int *h=new int[num];
 
    for(int i=0;i<num;i++){
        cin >> n[i] >> l[i] >> h[i] ;
        (*mine).setdata(n[i],l[i],h[i]);
    }
 
    pkm p2.("Mewtwo",30,300);
 
    for(int i=0;i<num;i++){
        cout << "#" << i <<endl;
 
        while(1){
            mine[i].attack(p2);
            p2.attack(mine[i]);
        }
        
        
   		p2.showinfo();
        (*mine).showinfo();
      
    }
 
    delete []mine;
    delete []n;
    delete []l;
    delete []h;
 
    return 0;
}
