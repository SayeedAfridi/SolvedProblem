/*
	Problem UrL	: https://codeforces.com/problemset/problem/41/A
	Problem Name: Translation
	Author		: killer
	Date		: Apr 27, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	string s, t;
	cin >> s >> t;
	int j = t.size() - 1;
	if(s.size() != t.size()){
		cout << "NO\n";
		return 0;
	}else{
		for(int i = 0; i < (int)s.size(); i++){
			if(s[i] != t[j--]){
				cout << "NO\n";
				return 0;
			}
		}
		cout << "YES\n";
	}
	return 0;
}
