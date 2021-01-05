#include<stdio.h>
int n;
void swap(int *x,int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void print_arr(int *arr)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d,",arr[i]);
	}
}
void permutation(int *arr,int l,int r)
{
	int i;
	if(l==r)
	{
		print_arr(arr);
		printf("\n");
	}
	else
	{
		for(i=l;i<=r;i++)
		{
			swap(arr+l,arr+i);
			permutation(arr,l+1,r);
			swap(arr+l,arr+i);
		}
	}
}
int main()
{
 	int i;
	scanf("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++)
	{
		arr[i-1]=i;
	}
	permutation(arr,0,n-1);
	return 0;
}
