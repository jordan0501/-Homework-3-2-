#include<stdio.h>
#include<stdlib.h>
unsigned long long int fib(unsigned int n);
int main()
{
	unsigned int a, result;
	printf("請輸入一個數:");
	scanf_s("%u", &a);
	result = fib(a);
	printf("fib(%u)=%u\n",a,result);
	system("pause");

}
unsigned long long int fib(unsigned int n)
{
	int ans, i;
	int n1 = 0, n2 = 1;
	if (0 == n || 1==n)
	{
		return n;
	}
	for ( i = 2; i <= n; i++)
	{
		ans = n1 + n2;
		n1 = n2;
		n2 = ans;
	}
	return ans;
}