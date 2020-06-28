#include<stdio.h>

int main()
{
	int a,b,c,small,larg;
	scanf("%d%d%d",&a,&b,&c);
	small=a,larg=a;
	if(b>a){
		larg=b;
			if(c>b)	larg=c;
			else if(c<a) small=c;
	}
	else if(b<a){
		small=b;
			if(c<b)	small=c;
			else if(c>a) larg=c;
	}
	
	
	printf("sum is %d\n",a+b+c);
	printf("average is %.2lf\n",(double)(a+b+c)/3);
	printf("product is %d\n",a*b*c);
	printf("smallest is %d\n",small);
	printf("largest is %d\n",larg);
	return 0;
}
