#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a; 
	printf("�п�J�@�Ӧr��:");
	scanf_s("%c", &a);
	if (a<97)
	{
		a = a + 32;
		printf("%c\n",a);
	}
	else if (a>=65)
	{
		a = a - 32;
		printf("%c\n", a);
	}
	system("pause");
	return 0;
}