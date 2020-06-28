#include<stdio.h>

int main(){
	
	short a[10];
	int i=0,j,sum,Max=0,Mnum=0;
	double ave;
	
	while(1){
		
		scanf(" %d",&a[i]);
		if(a[i]==-1)	break;
		i++;
		
	}
	
	sum = 0;
	for(j=0 ; j<i ; j++){
		sum+=a[j];
	}
	
	Max=0,Mnum=0;
	for(j=0 ; j<i ; j++){
		if(Max < a[j]){
			Max = a[j];
			Mnum = j;
		}
	
	}
	
	printf("%d\n%.1lf\n%d\n%d\n",sum,(double)sum/i,Max,Mnum+1);

	
	
	
	return 0;
} 
