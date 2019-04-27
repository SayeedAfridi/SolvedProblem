/*
	Problem UrL	: https://codeforces.com/problemset/problem/112/A
	Problem Name: Petya and Strings
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	string a, b;
	cin >> a >> b;
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	if(a.compare(b) == 0){
		cout << 0 << endl;
	}else if(a.compare(b) > 0){
		cout << 1 << endl;
	}else{
		cout << -1 << endl;
	}
	return 0;
}
