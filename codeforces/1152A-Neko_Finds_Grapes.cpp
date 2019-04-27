/*
	Problem UrL	: https://codeforces.com/contest/1152/problem/A
	Problem Name: Neko Finds Grapes
	Author		: killer
	Date		: Apr 24, 2019
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n, m, c1, c2, o1 = 0,e1 = 0, o2 = 0, e2 = 0;
    cin >> n >> m;
    long long int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] %2 == 0) e1++;
        else o1++;
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
        if(b[i] %2 == 0) e2++;
        else o2++;
    }
    c1 = min(o1, e2);
    c2 = min(e1, o2);

    cout << c1+c2 << endl;
    return 0;
}

