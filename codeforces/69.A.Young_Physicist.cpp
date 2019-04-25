/*
	Problem UrL	: https://codeforces.com/problemset/problem/69/A
	Problem Name: Young Physicist
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin >> n;
	int x[n], y[n], z[n], sumx = 0, sumy = 0, sumz = 0;
	for(int i = 0; i < n; i++){
		cin >> x[i] >> y[i] >> z[i];
		sumx += x[i];
		sumz += z[i];
		sumy += y[i];
	}

	if(sumx == 0 && sumy == 0 && sumz == 0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}
