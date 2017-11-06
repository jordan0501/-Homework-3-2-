#include<stdio.h>
#include<stdlib.h>
void hetona(int n,char d, char b, char c);
int main()
{
	int a;
	printf("¿é¤JºÐ¤l¼Æ:");
	scanf_s("%d",&a);
	hetona(a, '1', '2', '3');
	system("pause");
	return 0;
}
void hetona(int n, char d, char b, char c)
{
	if (n==1)
	{
		printf("Move sheet from %c-->%c\n",d,c);
	}
	else
	{
		hetona(n - 1, d, c, b);
		hetona(1, d, b, c);
		hetona(n - 1, b, d, c);
	}

}