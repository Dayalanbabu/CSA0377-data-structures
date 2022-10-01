#include<stdio.h>
void insertion_sort(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		j=1;
		while(j>0&&a[j]<a[j-1])
		{
			t=a[j];
			a[j]=a[j-1];
			a[j-1]=t;
			j=j-1;
			j--;
		}
	}
}
int main()
{
	int i,n,a[100];
	printf("enter the number of elments");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		insertion_sort(a,n);
		printf("the sorted element in array\n");
		for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	}
