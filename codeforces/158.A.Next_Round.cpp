/*
	Problem Name: Next Round
	Problem Url	: https://codeforces.com/problemset/problem/158/A
	Author		: killer
	Date		: Apr 23, 2019
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k, c = 0;
	cin >> n >> k;
	int m[n];
	for(int i = 0; i < n; i++){
		cin >> m[i];
	}
	for(int i = 0; i < n; i++){
		if(m[i] != 0 && m[i] >= m[k-1]){
			c++;
		}
	}

	cout << c << endl;
	return 0;
}
