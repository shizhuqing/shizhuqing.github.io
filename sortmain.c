#include <stdio.h>
#include <string.h>
#include "sort.h"

int sort(int *a,int n)
{
	int i;
	int j;
	int tmp;

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}

	return 0;

}

int print_fort(int *a,int n)
{
	int i;

	printf("≈≈–Ú«∞\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}

	return 0;
}

int print_back(int *a,int n)
{
	int i;

	printf("≈≈–Ú∫Û\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}

	return 0;
}

int main()
{
	int a[]={1,5,6,20,45,32,553,66,778};
    int n;
    
	n=sizeof(a)/sizeof(a[1]);

	print_fort(a,n);

	sort(a,n);

	print_back(a,n);

	return 0;

}
