/*
	Problem UrL	: https://codeforces.com/problemset/problem/58/A
	Problem Name: Chat Room
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	string a, b = "hello";
	int j = 0, pas = 0;
    cin >> a;
    for (int i = 0; i < (int)a.size(); i++) {
        if (a[i] == b[j]) {
            j++;
            pas++;
        }
    }
    if (pas == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
