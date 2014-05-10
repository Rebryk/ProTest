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
	int k1 = fscanf (out, "%Lf", &a);
	int k2 = fscanf (sol, "%Lf", &b);

    return fabs(a - b) > EPS || k1 != k2;
}
