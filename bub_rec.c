#include<stdio.h>
void swap(int *a,int *b)
{
        int c = *a;
        *a=*b;
        *b=c;
}
void bubble(int arr[],int n)
{
	if(n==1)
		return;

	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
			swap(arr+i,arr+i+1);
		bubble(arr,n-1);
	}
}
int main()
{
	int array[10]={10,8,4,4,12,3,5,1,9,-1};
	bubble(array,9);
	int i=0;
	while(array[i]!=-1)
	{
		printf("%d ",array[i]);
		i++;
	}
	printf("\n");
	return 0;
}
