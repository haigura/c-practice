#include <stdio.h>


int main() {
	char a = 'x';
	int b = 100;
	double c = 3.14;

	printf(a, sizeof(char),&a);
	printf(b, sizeof(int),&b);
	printf(c, sizeof(double),&c);

	return 0;
};
