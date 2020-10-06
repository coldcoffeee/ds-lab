#include <stdio.h>
void insertionSort(int arr[], int i, int n)
{
	int value = arr[i];
	int j = i;

	while (j > 0 && arr[j - 1] > value)
	{
		arr[j] = arr[j - 1];
		j--;
	}

	arr[j] = value;


	if (i + 1 <= n) {
		insertionSort(arr, i + 1, n);
	}
}

int main()
{
	int arr[] = { 33, 18, 5, 41, 14, 29, 12 };
	int n = 7;

	insertionSort(arr, 1, n - 1);

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
