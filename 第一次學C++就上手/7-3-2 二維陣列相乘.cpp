#include<iostream>
using namespace std;

int main(){
	
	int a[3][3],b[3][3],ab[3][3],i,j,k;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout << "輸入矩陣 A 第 " << i+1 << " 行第 " << j+1 << " 列的元素: "; 
			cin >> a[i][j];
		}
	}			
			
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){ 
			cout << "輸入矩陣 B 第 " << i+1 << " 行第 " << j+1 << " 列的元素: "; 
			cin >> b[i][j];
		}
	}		
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){ 
			ab[i][j]=0;
			for(k=0;k<3;k++){
				ab[i][j]+=a[i][k]*b[k][j];
			}
			cout << ab[i][j] << " ";
		}
		cout << endl;
	}		
	
					
	return 0;	
}
