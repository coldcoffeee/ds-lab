#include<stdio.h>
void swap(int *a,int *b)
{
        int c = *a;
        *a=*b;
        *b=c;
}
int main()
{
    int arr[]={68,11,22,3,5,7,17};
	int i,j;
	int n=7,min_index;
	for(i=0;i<n;i++)
	{
		min_index=i;
		for(j=i;j<n-1;j++)
		{
			min_index=arr[min_index]<arr[j+1]?min_index:j+1;
		}
		swap(arr+i,arr+min_index);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
        return 0;
}

