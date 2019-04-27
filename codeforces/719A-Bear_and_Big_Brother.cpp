/*
	Problem UrL	: http://codeforces.com/problemset/problem/791/A
	Problem Name: Bear and Big Brother
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	int n, m, c = 0;
	cin >> n >> m;
	while(1){
		n *= 3;
		m *= 2;
		c++;
		if(n > m) break;
	}
	cout << c << endl;
	return 0;
}
