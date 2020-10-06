#include<stdio.h>
void swap(int *a,int *b)
{
        int c = *a;
        *a=*b;
        *b=c;
}
int main()
{
        int arr[]={1,11,22,3,5,7,17};
	int i,j;
	int n=7;
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr+j,arr+j+1);
			}
					
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
        return 0;
}

