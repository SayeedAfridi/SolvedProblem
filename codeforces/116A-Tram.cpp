/*
	Problem UrL	: https://codeforces.com/problemset/problem/116/A
	Problem Name: Tram
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	int n, maxcap = 0, rem = 0;
	cin >> n;
	int a, b;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		rem = (rem - a) + b;
		if(rem > maxcap){
			maxcap = rem;
		}
	}
	cout << maxcap << endl;
	return 0;
}
