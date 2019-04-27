/*
	Problem UrL	: https://codeforces.com/problemset/problem/467/A
	Problem Name: 467.A.George and Accommodation
	Author		: killer
	Date		: Apr 26, 2019
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, c = 0, p, q;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> p >> q;
		if(abs(q - p) >= 2){
			c++;
		}
	}
	cout << c << endl;
	return 0;
}
