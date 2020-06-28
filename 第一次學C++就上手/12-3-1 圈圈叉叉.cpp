#include<iostream>
#include<fstream>
using namespace std;

int compare(char x,char y,char z){
	if(x==y && x==z && x!=' ')
		return 1;
	else 
		return 0;
};

int main(){
	
	int i,j,num;
	char table [3][3],ch;
	
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			table[i][j] = ' ';
			
	for(i=0; ;i++){
		for(j=0;j<3;j++){
			cout << "+ - + - + - +" << endl
			<< "| " << table[j][0] << " | " << table[j][1] << " | " << table[j][2] << " |" << endl;		
		}
		cout << "+ - + - + - +" << endl << endl;
		
		if(num == -1){
			cout << "User " << ch << "獲勝" << endl;
			break;
		}
			
		
		if(i%2)	
			ch = 'B';
		else
			ch = 'A';
			
		cout << "User " << ch << " 位置: ";
			
		cin >> num;
		
		if(table[num/3][num%3-1] == ' '){
			if(i%2)
				table[num/3][num%3-1] = 'X';
			else
				table[num/3][num%3-1] = 'O';
		}
		else if(num>9)
			cout << "請填9以下的數字" << endl;
		else 
			cout << "已經下過了" << endl;
		
		
		if(i>=4) 
			for(j=0;j<3;j++){
				if( compare(table[0][0],table[1][1],table[2][2]) ||
					compare(table[j][0],table[j][1],table[j][2]) ||
					compare(table[0][j],table[1][j],table[2][j]) ||
					compare(table[0][2],table[1][1],table[2][0]) ){
					
					num = -1;
					break;
					}
				 
			}
		
			
	}
	
	return 0;
	
}
