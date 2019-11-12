#include <stdio.h>

int main() {
	
	int arr[5];
	int average = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("input a value in arr[%d]: ", i);
		scanf_s("%d", &arr[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
		average += arr[i];
	}

	printf("average: %d", average/5);

	return 0;
}