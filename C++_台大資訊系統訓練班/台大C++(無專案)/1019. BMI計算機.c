#include<stdio.h>

int main(){
	int h,w;
	double bmi;
	
	scanf("%d%d",&h,&w);
	bmi=(double)w/(((double)h/100)*((double)h/100));
	printf("%.2lf\n",bmi);
	
	if(bmi<18.5)	printf("Underweight");
	else if(bmi<24)	printf("Normal");
	else if(bmi<27)	printf("Overweight");
	else if(bmi<30)	printf("Obese Class I");
	else if(bmi<35)	printf("Obese Class II");
	else 			printf("Obese Class III");
	
	
	return 0;
} 
