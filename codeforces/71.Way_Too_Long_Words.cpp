/*
	Problem Name: Way Too Long Words
	Problem Url	: https://codeforces.com/problemset/problem/7
	Author		: killer
	Date		: Apr 23, 2019
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	string word; //init word as string
	int n;
	cin >> n;
	while(n--){
		cin >> word; // taking the input
		int len = word.size();
		if(len > 10){
			cout << word[0] << len-2 << word[len-1] << endl;
		}else{
			cout << word << endl;
		}
	}
	return 0;
}
