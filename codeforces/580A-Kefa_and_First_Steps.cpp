/*
	Problem UrL	: https://codeforces.com/problemset/problem/580/A
	Problem Name: Kefa_and_First_Steps
	Author		: killer
	Date		: Apr 27, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;
	int m = 1, c = 1;
	cin >> n;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(i > 0){
			if(a[i] >= a[i-1]){
				c++;
				m = max(m, c);
			}else if(a[i] < a[i-1]){
				c = 1;
			}
		}
	}
	cout << m << endl;
	return 0;
}
