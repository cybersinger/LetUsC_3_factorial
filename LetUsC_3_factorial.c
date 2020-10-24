#include <stdio.h>
main() {
	int i, broj, factorial=1;
	printf("Unesi broj: \n");
	scanf_s("%d", &broj, 4);
	for (i = 0; i < broj; i++)
		factorial = factorial * (broj - i);
	printf("Faktorijal broja %d je %d\n", broj, factorial);
}