/*
	Problem UrL	: https://codeforces.com/problemset/problem/96/A
	Problem name: Football
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	string a;
	bool f = false;
	cin >> a;
	int len = a.size();
	if(len < 7){
		cout << "NO" << endl;
		return 0;
	}else{
		for (int i=0;i<len-6;i++){
			if (a[i]=='0' && a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='0' && a[i+4]=='0' && a[i+5]=='0' && a[i+6]=='0'){
				f = true;
				break;
			}
			if (a[i]=='1' && a[i+1]=='1' && a[i+2]=='1' && a[i+3]=='1' && a[i+4]=='1' && a[i+5]=='1' && a[i+6]=='1'){
				f = true;
				break;
			}
		 }
		f ? cout << "YES" : cout << "NO";
		cout << "\n";
	}
	return 0;
}
