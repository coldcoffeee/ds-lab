#include<stdio.h>
int arr[]={68,11,22,3,5,7,17};
int i,j;
int n=7,min_index;
void swap(int *a,int *b)
{
        int c = *a;
        *a=*b;
        *b=c;
}
void select(int *a,int b)
{
	if(b==6)
		return;
	else
	{
		min_index = b;
		for(i=b;i<n;i++)
		{
			min_index=arr[min_index]<arr[i]?min_index:i;		
		}
		swap(arr+b,arr+min_index);
		select(a+1,b+1);
	}
}

int main()
{
	select(arr,0);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
        return 0;
}

