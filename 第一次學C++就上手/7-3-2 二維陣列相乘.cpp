#include<iostream>
using namespace std;

int main(){
	
	int a[3][3],b[3][3],ab[3][3],i,j,k;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout << "��J�x�} A �� " << i+1 << " ��� " << j+1 << " �C������: "; 
			cin >> a[i][j];
		}
	}			
			
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){ 
			cout << "��J�x�} B �� " << i+1 << " ��� " << j+1 << " �C������: "; 
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
