#include<stdio.h>
int main()
{
	int n,i,val;
	printf("Enter The Number:   ");
	scanf("%d",&n);
	printf("Prime Factors:  ");
	for(i=2;i<=n;i++)
	{
		val = 1;
		while(n%i==0)
		{
			if(val)//For only printing one Prime factor once
			{
				printf("%d ",i);
				val = 0;
			}
			n = n/i;
		}
	}
	return 0;
}
