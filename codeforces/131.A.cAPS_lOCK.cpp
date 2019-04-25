/*
	Problem UrL	: https://codeforces.com/problemset/problem/131/A
	Problem Name: cAPS_lOCK
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	string str;
	cin >> str;
	int c = 0;
	int len = str.size();
	for(int i = 1; i < len; i++){
		if(isupper(str[i])){
			c++;
		}
	}
	if(islower(str[0]) && c == len-1){
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		str[0] = str[0] - 32;
		cout << str << endl;
	}else if(isupper(str[0]) && c == len -1){
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		cout << str << endl;
	}else{
		cout << str << endl;
	}
	return 0;
}
