#include<stdio.h>
void gcd(int a,int b)
{
	while(b%a!=0)
	{
		int temp = b%a;
		b=a;
		a=temp;
	}
	printf("GCD IS %d",a);
}
int main()
{
	int a,b;
	printf("Enter First Number:  ");
	scanf("%d",&a);
	printf("Enter Second Number:  ");
	scanf("%d",&b);
	gcd(a,b);
	return 0;
}
