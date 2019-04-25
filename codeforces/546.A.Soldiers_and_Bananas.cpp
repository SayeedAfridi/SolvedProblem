/*
	Problem UrL	: https://codeforces.com/problemset/problem/546/A
	Problem Name: Soldiers And Bananas
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int k, w, n;
	cin >> k >> w >> n;
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += i*k;
	}
	(sum-w) > 0 ? cout << sum - w << endl : cout << 0 << endl;
	return 0;
}

