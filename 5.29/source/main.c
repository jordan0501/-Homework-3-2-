#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b,c,d,n;
	printf("��J2�ӼƦr:");
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
				printf("�̤p�����ƬO:%d", c);
				system("pause");
				return 0;
			}

		}
	}
	
	

	 




}