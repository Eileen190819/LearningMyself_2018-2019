#include<iostream>

using namespace std;

int main()
{
	int i,j,a[3][3],ans=0;
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			cout << "��J��C���� " <<  i+1 << " ��� " << j+1 << " �C������: " ;
			cin >> a[i][j];
		}	
				
	}
	
	for(i=0;i<3;i++){
		
		ans+=a[i][0]*a[(i+1)%3][1]*a[(i+2)%3][2]-a[i][0]*a[(i+2)%3][1]*a[(i+1)%3][2];		
				
	}
	
	cout << "Ans: " << ans << endl;
	 
	
	return 0;
}
