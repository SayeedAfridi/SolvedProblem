/*
	Problem UrL	: https://codeforces.com/problemset/problem/479/A
	Problem Name: Expression
	Author		: killer
	Date		: Apr 27, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	int a, b, c, m = 0, n;
	cin >> a >> b >> c;
	n = a+b+c;
	m = max(m,n);
	n = a+(b*c);
	m = max(m,n);
	n = (a*b)+c;
	m = max(m,n);
	n = a*b*c;
	m = max(m,n);
	n = (a+b)*c;
	m = max(m,n);
	n = a*(b+c);
	m = max(m,n);
	cout << m << endl;
	return 0;
}
