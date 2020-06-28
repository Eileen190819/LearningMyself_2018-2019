#include<iostream>
using namespace std;
 
class Pokemon
{
    public:
        
        void ShowInfo();      
        void Attack(Pokemon &target);      
        void defence(int atkp);  
        void cure();
        void setData(string Name,int Lv,int Hp);  
 
    private:  
        string name;
        int lv;
        int hpmax;
        int hpcurrent;
 
};
