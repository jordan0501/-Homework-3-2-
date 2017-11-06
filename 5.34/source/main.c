#include <stdio.h>
#include<stdlib.h>
int integerPower(int base,int  exponent);
int main()
{
	int a, b; 
	printf("m=");
	scanf_s("%d",&a);
	printf("n=");
	scanf_s("%d", &b);
	printf("%d的%d次方為:%d",a,b,integerPower(a,b));
	


	system("pause");
}
int integerPower(int base, int exponent)
{
	int i=1;
	while (exponent>=1)
	{
		i = i*base;
		exponent = exponent - 1;
	}
	return i;

}