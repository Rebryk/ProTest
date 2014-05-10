#include <stdio.h>

FILE *in;
FILE *out;
FILE *sol;


int main(int argc, char *argv[]) {

	in = fopen(argv[1], "r");
	out = fopen(argv[2], "r");
	sol = fopen(argv[3], "r");

	int a, b;
	int k1 = fscanf (out, "%d", &a);
	int k2 = fscanf (sol, "%d", &b);

    return a != b || k1 != k2;
}
