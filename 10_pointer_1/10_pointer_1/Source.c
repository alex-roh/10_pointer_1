#include <stdio.h>

int main() {
	
	int arr[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("input a value in arr[%d]: ", i);
		scanf_s("%d", &arr[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}