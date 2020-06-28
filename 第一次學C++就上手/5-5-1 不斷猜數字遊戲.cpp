#include<iostream>
using namespace std;

int main(){
	
	int num;
	int ans=27;
	
	while(1){ 
		cout << "請在1~100之間猜一個數字：" ;
		cin >>  num;
		if(num>ans){
			if(num-ans <= 5)
				cout << "已經接近答案了" << endl;
			else
				cout << "猜得太大了" << endl; 
		}
		else if(num<ans){
			if(ans-num <= 5)
				cout << "已經接近答案了" << endl;
			else
				cout << "猜得太小了" << endl; 
		}
		else{

		cout << "正確答案" << endl ;
		break;
		}	
			
			
	}
		
	return 0;	
}
