#include<stdio.h>
#include<math.h>
int fac(int n)
{
	int i=1;
	while(n)
	{
		i *=n;
		n--;
	}
	return i;
}
int main()
{
	int x,n,i,sign=1;
	float sum=0,x_r;
	printf("Enter the value of angle in degree:   ");
	scanf("%d",&x);
	printf("Enter the value of final power:   ");
	scanf("%d",&n);
	x_r = x*(3.14/180);//converting to radian
	for(i=1;i<=n;i+=2)
	{
		float a;
		a = pow(x_r,i)*sign;
		a = a/fac(i);
		sum +=a;
		sign = sign*(-1);
	}
	printf("\nSin(%d) is : %f",x,sum);
	return 0;
}
