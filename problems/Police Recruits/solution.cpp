#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <string>
#include <algorithm>
#include <set>
#include <queue>
#include <map>
#include <vector>

using namespace std;

int n, a, cnt, ans;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		if (a != -1)
			cnt += a;
		else
		{
			if (cnt == 0)
				++ans;
			else
				--cnt;
		}
	}
	cout << ans << endl;
}