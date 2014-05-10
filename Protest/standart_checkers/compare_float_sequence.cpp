#include <stdio.h>
#include <math.h>

FILE *in;
FILE *out;
FILE *sol;

const double EPS = 1e-6;

int main(int argc, char *argv[]) {

	in = fopen(argv[1], "r");
	out = fopen(argv[2], "r");
	sol = fopen(argv[3], "r");

	double a, b;
	int k1, k2;
	while (true)
	{
		k1 = fscanf(out, "%Lf", &a);
		k2 = fscanf(sol, "%Lf", &b);
		if (k1 == -1 && k2 == -1)
			break;
		if (k1 == -1 || k2 == -1)
			return 1;
		if (fabs(a - b) > EPS)
			return 1;
	}
	return 0;
}
