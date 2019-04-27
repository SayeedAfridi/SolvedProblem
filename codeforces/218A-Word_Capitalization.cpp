/*
	Problem UrL	: https://codeforces.com/problemset/problem/281/A
	Problem Name: Word Capitalization
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	string s;
	cin >> s;
	bool f = true;
	if(s[0] >= 65 && s[0] <= 90){
		f = false;
	}
	if(f) s[0] = s[0] - 32;
	cout << s << endl;
	return 0;
}
