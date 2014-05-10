#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <set>
#include <queue>
#include <map>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int n, t, c, cnt, ans;
vector < int > a;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d %d %d", &n, &t, &c);
	a.resize(n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &a[i]);
	for (int i = 0; i < c; ++i)
		if (a[i] > t)
			++cnt;
	if (cnt == 0)
		++ans;
	for (int i = 1; i + c - 1 < n; ++i)
	{
		if (a[i - 1] > t)
			--cnt;
		if (a[i + c - 1] > t)
			++cnt;
		if (cnt == 0)
			++ans;
	}
	printf("%d\n", ans);
}