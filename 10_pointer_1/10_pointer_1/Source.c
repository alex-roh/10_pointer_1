
#include <stdio.h>

int main() {
	
	int i = 4;
	int j = 300;

	int* pi = &i;
	char* pc = &i;

	char* pj = &j;

	printf("%i, %i, %i, %i\n", i, *pi, *pc, *pj);

	return 0;
}