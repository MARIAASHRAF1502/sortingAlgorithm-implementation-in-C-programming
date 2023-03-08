#include<stdio.h>


int main()
{
	int a[] = {6,5,1,2,3};
	int i,k,j,small,s;
	int n = sizeof(a) / sizeof(a[0]);
//	printing the values before sorting...
    printf("\nBefore Sorting");
    for(k=0;k<n;k++)
    {
    	printf("\n%d",a[k]);
	}
	
	for(i=0;i<n-1;i++)
	{
        //denote the position of smallest number...
		small = i;
		
		for(j = i+1; j<n;j++)
		{
			if(a[j]<a[small])
			{
				//s = j;
				int temp = a[small];
		        a[small] = a[j]; //or a[j]
			    a[j] = temp; //or a[j]
	     	}
		}
	}
		
		
	//	printing the values after sorting...
    printf("\nAfter Sorting");
    for(k=0;k<n;k++)
    {
    	printf("\n%d",a[k]);
	}
}
