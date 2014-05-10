#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

long long a, n, m;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> n >> m >> a;
	cout << (n / a + (n % a ? 1 : 0)) * (m / a + (m % a ? 1 : 0)) << endl;
}