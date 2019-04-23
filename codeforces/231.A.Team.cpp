/*
	Problem Name: Team
	Problem Url	: https://codeforces.com/problemset/problem/231/A
	Author		: killer
	Date		: Apr 23, 2019
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, c = 0;
	cin >> n;
	while(n--){
		int s = 0, k;
		for(int i = 0; i < 3; i++){
			cin >> k;
			s += k;
		}
		if(s >= 2)	c++;
	}
	cout << c << endl;
	return 0;
}
