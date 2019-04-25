/*
	Problem UrL	: https://codeforces.com/problemset/problem/339/A
	Problem Name: Helpful Maths
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	string a;
	cin >> a;
	int len = a.size();
	vector<char> s;
	for(int i = 0; i < len; i++){
		if(a[i] == '+'){
			continue;
		}else{
			s.push_back(a[i]);
		}
	}
	sort(s.begin(), s.end());
	for(int i = 0; i < s.size(); i++){
		cout << s[i];
		if(i != s.size() - 1){
			cout << "+";
		}
	}
	cout << endl;

	return 0;
}
