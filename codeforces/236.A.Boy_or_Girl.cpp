/*
	Problem UrL	: https://codeforces.com/problemset/problem/236/A
	Problem Name: Boy or Girl
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>

using namespace std;
int main(){
	string str;
	cin >> str;
	vector<char> wostr;
	int n = str.size();
	for (int i=0; i<n; i++) {
	     int j;
	     for (j=0; j<i; j++){
	        if (str[i] == str[j])
	           break;
	     }
	     if (j == i)
	        wostr.push_back(str[i]);
	}
	if((int)wostr.size() % 2 == 0){
		cout << "CHAT WITH HER!" << endl;
	}else{
		cout << "IGNORE HIM!" << endl;
	}
	return 0;
}
