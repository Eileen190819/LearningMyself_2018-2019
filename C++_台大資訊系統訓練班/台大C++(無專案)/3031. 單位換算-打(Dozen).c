#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%12)
		printf("%d dozen and %d",a/12,a%12);
	else
		printf("%d dozen",a/12);
	
	return 0;
}
