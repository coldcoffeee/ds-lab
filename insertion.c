#include<stdio.h>
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int n;
	printf("\nEnter the array size: ");
	scanf("%d",&n);
	int arr[n]; //={2,1,4,5,3,9,7,6,8,10};

	int i,cnum,index,prev;	
	
	printf("\nEnter array elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	for(i=1;i<n;i++)
	{
		index=i;
		cnum=arr[index];
		prev=index-1;
		while(prev>=0 && cnum<arr[prev])
		{
			swap(arr+index,arr+prev);
			prev--;
			index--;
		}
	}
	
	printf("\nSorted array: {");
	for(i=0;i<n;i++)
	{
		if(i==n-1)
			printf("%d",arr[i]);
		else
			printf("%d, ",arr[i]);
	}
	printf("}\n\n");

	return 0;
}
