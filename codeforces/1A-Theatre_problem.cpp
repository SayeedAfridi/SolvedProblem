/*
	Problem Name: Theatre Problem
	Problem Url	: https://codeforces.com/problemset/problem/1/A
	Author		: killer
	Date		: Apr 23, 2019
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n, m, a; // init n, m and a describe in problem
	cin >> n >> m >> a; // Take input
	long long int res1, res2; // init result value

	if(n % a == 0){
		res1 = n/a;
	}else{
		res1 = n/a + 1;
	}

	if(m % a == 0){
		res2 = m/a;
	}else{
		res2 = m/a + 1;
	}

	cout << res1 * res2 << endl;
	return 0;
}
