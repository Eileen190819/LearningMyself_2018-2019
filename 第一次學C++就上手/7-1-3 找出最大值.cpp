#include<iostream>
using namespace std;


int main(){
	
	int array[]={5,10,0,77,65,12,78,25}, Max=0;
	cout << "�}�C���e: " ;
	
	for(int i=0;i<8;i++){
		cout << array[i] << " " ;
		if(array[i] > Max)	Max=array[i];
	}
	
	cout << endl << "�̤j�Ȭ�: " << Max << endl; 
	
	
	
	return 0;
} 

