/*
	Problem UrL	: https://codeforces.com/problemset/problem/282/A
	Problem Name: Bit++
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	int n, c = 0;
	cin >> n;
	string a;
	for(int i = 1; i <= n; i++){
		cin >> a;
		if(a == "X++"){
			c++;
		}else if(a == "X--"){
			c--;
		}else if(a == "++X"){
			++c;
		}else if(a == "--X"){
			--c;
		}
	}
	cout << c << endl;
	return 0;
}
