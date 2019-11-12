
#include <stdio.h>

void swap_callbyvalue(int x, int y);
void swap_callbyreference(int* x, int* y);

int main() {
	
	int a = 3;
	int b = 5;
	swap_callbyvalue(a, b);

	printf("a: %i, b:%i\n", a, b);

	swap_callbyreference(&a, &b);

	printf("a: %i, b:%i\n", a, b);

	return 0;
}


void swap_callbyvalue(int x, int y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}

void swap_callbyreference(int* x, int* y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}