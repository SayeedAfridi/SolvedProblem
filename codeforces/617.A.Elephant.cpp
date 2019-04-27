/*
	Problem UrL	: https://codeforces.com/problemset/problem/617/A
	Problem Name: Elephant
	Author		: killer
	Date		: Apr 27, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	int n, stp = 0;
	cin >> n;
	stp = stp + n / 5;
	n %= 5;
	stp = stp + n / 4;
	n %= 4;
	stp = stp + n / 3;
	n %= 3;
	stp = stp + n / 2;
	n %= 2;
	stp = stp + n / 1;
	n %= 1;
	cout << stp << endl;
	return 0;
}
