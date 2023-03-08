#include<stdio.h>


int main()
{
	int a[] = {10,4,5,9,11,40,12,36,8,15};
	int i,k;
	int n = sizeof(a) / sizeof(a[0]);
//	printing the values before sorting...
    printf("\nBefore Sorting");
    for(k=0;k<n;k++)
    {
    	printf("\n%d",a[k]);
	}
	
	for(i = 1;i<n;i++)
	{
		int temp = a[i];
		int j = i-1;
		
		while(j>=0 && temp<=a[j])
		{
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = temp;
	}
	
	//	printing the values after sorting...
    printf("\nAfter Sorting");
    for(k=0;k<n;k++)
    {
    	printf("\n%d",a[k]);
	}
}
