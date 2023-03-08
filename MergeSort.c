#include<stdio.h>



void merge(int a[],int lb,int m,int ub)
{	
	int i,j,k;
	int n1 = m-lb+1;
	int n2 = ub-m;
	
	int lArray[n1],rArray[n2];
	
	for(i=0;i<n1;i++)
	{
		lArray[i] = a[lb+i];
	}
	
	for(j=0;j<n2;j++)
	{
		rArray[j] = a[m+1+j];
	}
	
	
	i =0;
	j =0;
	k =lb;
	
	while(i<n1 && j<n2)
	{
		if(lArray[i] <= rArray[j])
		{
			a[k] = lArray[i];
			i++;			
		}
		else
		{
			a[k] = rArray[j];
			j++;
		}
		k++;
	}
	
	
		while(i < n1)
		{
			a[k] = lArray[i];
			i++;
			k++;
		}

	
		while(j<n2)
		{
			a[k] = rArray[j];
			k++;
			j++;
		}
		
}



void mergesort(int a[],int lb,int ub)
{
	if(lb < ub)
	{
		int m = (lb + ub) / 2;
		mergesort(a,lb,m);
		mergesort(a,m+1,ub);
		merge(a,lb,m,ub);	
	}
		
}

void printArray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}




int main()
{
	int a[] = {6,5,7,2,3};
    int n = sizeof(a) / sizeof(a[0]);
	printf("\nBefore Sorting");
	printArray(a,n);	
	mergesort(a,0,n-1);
	printf("\nAfter sorting");
	newPrint(a,n);
	return 0;
}
































void newPrint(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
