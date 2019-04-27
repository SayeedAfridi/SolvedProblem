/*
	Problem UrL	: https://codeforces.com/problemset/problem/266/A
	Problem Name: Stones on the Table
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	int n, c = 0;
	cin >> n;
	char s[n];
	for(int i = 0; i < n; i++){
		cin >> s[i];
		if(i == 0){
			continue;
		}else if (s[i] == s[i-1]){
			c++;
		}
	}
	cout << c << endl;
	return 0;
}
