/*
	Problem UrL	: https://codeforces.com/problemset/problem/337/A
	Problem Name: 337A-Puzzles
	Author		: killer
	Date		: Apr 27, 2019
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, f[1000];
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> f[i];
    }
    sort(f, f + m);
    int l = f[n-1] - f[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (f[i+n-1] - f[i] < l)
        {
            l = f[i+n-1] - f[i];
        }
    }
    cout << l << endl;
    return 0;
}
