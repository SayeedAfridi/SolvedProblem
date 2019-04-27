/*
	Problem UrL	: https://codeforces.com/problemset/problem/160/A
	Problem Name: Twins
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[105], s=0, b=0, cnt=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]), s+=a[i];
    s>>=1;
    sort(a, a+n);
    for(int i=n-1; i>=0; i--) {
        b+=a[i], cnt++;
        if(b>s) break;
    }
    printf("%d", cnt);
    return 0;
}
