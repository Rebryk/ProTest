#include <stdio.h>

FILE *in;
FILE *out;
FILE *sol;

int main(int argc, char *argv[]) {

	in = fopen(argv[1], "r");
	out = fopen(argv[2], "r");
	sol = fopen(argv[3], "r");

	long long a, b;
	int k1, k2;
	while (true)
	{
		k1 = fscanf(out, "%I64d", &a);
		k2 = fscanf(sol, "%I64d", &b);
		if (k1 == -1 && k2 == -1)
			break;
		if (k1 == -1 || k2 == -1)
			return 1;
		if (a != b)
			return 1;
	}
	return 0;
}
