#include<stdio.h>
int main()
{
	int i,j,r,c,a[10][10],b[10][10],mul[10][10],k;
	printf("enter the no of rows=");
	scanf("%d",&r);
	printf("enter the no of columns=");
	scanf("%d",&c);
	
	printf("enter the first matrix elements=");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter the second matrix elements=");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("multiply of matrix=\n");
	for(i=0;i<r;i++)
	{	
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
			mul[i][j]+=a[i][k]*b[k][j];
		}
	}
}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("%d\t",mul[i][j]);
	}
	printf("\n");
}
	return 0;
}
