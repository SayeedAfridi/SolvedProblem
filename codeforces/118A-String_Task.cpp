/*
	Problem Name: String Task
	Problem Url	: https://codeforces.com/problemset/problem/118/A
	Author		: killer
	Date		: Apr 23, 2019
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	int len = str.size();
	for(int i = 0; i < len; i++){
		if(str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u' || str[i] == 'y'){
			continue;
		}
		cout << "." << str[i];
	}
	cout << endl;
	return 0;
}
