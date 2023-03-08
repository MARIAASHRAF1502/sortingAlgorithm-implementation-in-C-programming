#include<stdio.h>
#include<conio.h>
int main()
{
	int a[] = {7,5,4,9,1,21,54,7,3,45};
	int n = 10,i,j,k;
	for(k=0;k<n;k++)
	{
		printf("\n%d",a[k]);		
	}
	printf("\nsize : %d",n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\nSorted Array is : ");
	for(k=0;k<n;k++)
	{
		printf("\n%d",a[k]);		
	}
	
}
