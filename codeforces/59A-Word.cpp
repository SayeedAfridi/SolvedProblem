/*
	Problem UrL	: https://codeforces.com/problemset/problem/59/A
	Problem Name: Word
	Author		: killer
	Date		: May 8, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	string str;
	cin >> str;
	int len = str.size();
	int u = 0, l = 0;
	for (int i = 0; i < len; i++){
		if(isupper(str[i])){
			u++;
		}else{
			l++;
		}
	}
	if(u > l){
		transform(str.begin(), str.end(), str.begin(), ::toupper);
	}else if(u == l){
		transform(str.begin(), str.end(), str.begin(), ::tolower);
	}else{
		transform(str.begin(), str.end(), str.begin(), ::tolower);
	}
	cout << str << endl;
	return 0;
}
