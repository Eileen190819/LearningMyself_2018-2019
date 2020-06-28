#include<iostream>
#include<string>
#include<stdio.h>
#define N 2
using namespace std;

struct Friend{
	string name;
	string tel; //使用 int 不會印出手機最前面的數字0 
	string bir;
}; 

void enter(Friend f[],int size){
	cout << "名稱: ";
	cin >> f[size].name;
	cout << "電話: ";
	cin >> f[size].tel;
	cout << "生日: ";
	cin >> f[size].bir;

}

void show(Friend f[],int size){
	for(int i=0 ; i<size ; i++){
		cout << f[i].name << "的電話: " << f[i].tel << endl
			 << f[i].name << "的生日: " << f[i].bir << endl
			 << "------------------------------" << endl;
	}

}

int main()
{
	int choice,now=0;
	Friend f[N];
	
	while(choice!=0){	
		
		cout << "請問您要 (1)輸出好友名單 (2)新增好友資料 (0)離開 " << endl;
		cin >> choice; 
		
		switch(choice){
			case 1:
				if(now != 0)
					show(f,now);
				else
					cout << "目前沒有資料" << endl; 
				break;
			case 2:
				if(now == N)
					cout << "名單已滿" << endl; 
				else{
					enter(f,now);
					now++;
				}	
				break;
			case 0:
				break;
			fflush(stdin);
		}
		cout << endl;
	}		
	
	return 0;
 } 
 
 
 
