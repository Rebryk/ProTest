#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>


using namespace std;

FILE *in;
FILE *out;
FILE *sol;

char a[1000000];
char b[1000000];

int main(int argc, char *argv[]) {

	in = fopen(argv[1], "r");
	out = fopen(argv[2], "r");
	sol = fopen(argv[3], "r");

	int va, vb;
	while (true)
	{
		va = fscanf(out, "%s", a);
		vb = fscanf(sol, "%s", b);
		if (va == -1 && vb == -1)
			break;
		if (va == -1 || vb == -1)
			return 1;
		string A(a);
		string B(b);
		if (A != B)
			return 1;
	}
	return 0;
}
