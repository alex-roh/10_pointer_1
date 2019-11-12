
#include <stdio.h>

int main() {
	
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i : %i, %p \n", &i, &i);
	printf("c : %i, %p \n", &c, &c);
	printf("f : %i, %p \n", &f, &f);

	return 0;
}