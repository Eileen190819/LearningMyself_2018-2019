#include<stdio.h>
#include<math.h>
int main()
{
	float O,A;
	scanf("%f",&O);
	printf("Original: %.2f\nAdjusted: %.2f(+%.f)",O,sqrt(O)*10,(sqrt(O)*10)-O);
	return 0;
}
