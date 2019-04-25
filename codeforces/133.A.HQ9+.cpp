/*
	Problem UrL	: https://codeforces.com/problemset/problem/133/A
	Problem Name: HQ9+
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	string str;
	cin >> str;
	int len = str.size();
	for(int i = 0; i < len; i++){
		if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}
