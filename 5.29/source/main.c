#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b,c,d,n;
	printf("輸入2個數字:");
	scanf_s("%d%d",&a,&b);
	if (a<b)
	{
		d = a;
		a = b;
		b = d;
	} 
	{
		for (n = 1; n <= b; n++)
		{
			if ((a*n) % b == 0)
			{
				c = a*n;
				printf("最小公倍數是:%d", c);
				system("pause");
				return 0;
			}

		}
	}
	
	

	 




}