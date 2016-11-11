#include <bits/stdc++.h>
#define M 8
using namespace std;
void d(long int s, long int x)
{
	int a[M], i, j, k;
	memset(a, -1, sizeof(a));
	if (x == 0)
		a[M - 1] = 0;
	else
		for ( i = M - 1; x > 0; i--)
		{
			a[i] = x % 10;
			x /= 10;
		}
	string l[5][10] = {
		" - ", "   ", " - ", " - ", "   ", " - ", " - ", " - ", " - ", " - ",
		"| |", "  |", "  |", "  |", "| |", "|  ", "|  ", "  |", "| |", "| |",
		"   ", "   ", " - ", " - ", " - ", " - ", " - ", "   ", " - ", " - ",
		"| |", "  |", "|  ", "  |", "  |", "  |", "| |", "  |", "| |", "  |",
		" - ", "   ", " - ", " - ", "   ", " - ", " - ", "   ", " - ", " - "
	};
	for (int j = 1; j <= (2 * s + 3); j++)
	{
		for (int i = 0; i < M; i++)
			if (a[i] != -1)
			{
				string t;
				if (j == 1)
					t = l[0][a[i]];
				if (2 <= j&&j < (s + 2))
					t = l[1][a[i]];
				if (j == (s + 2))
					t = l[2][a[i]];
				if ((s + 3) <= j&&j <= (2 * s + 2))
					t = l[3][a[i]];
				if (j == (2 * s + 3))
					t = l[4][a[i]];
				cout << t[0];
				for (int k = 0; k < s; k++)
					cout << t[1];
				cout << t[2];
				if (i < M-1)
					cout << " ";
			}
		cout << endl;
	}
}
int main()
{
	long int s, x;
	while (cin >> s >> x, s || x)
	{
		d(s, x);
		cout << endl;
	}
	return 0;
}
