/*
	Problem UrL	: https://codeforces.com/problemset/problem/122/A
	Problem Name: Lucky Division
	Author		: killer
	Date		: Apr 25, 2019
*/

#include <bits/stdc++.h>

int arr[12]={4,7,47,74,44,444,447,474,477,777,774,744};

using namespace std;
int main(){
	int n;
	cin >> n;
	bool flag = false;
	for(int i=0;i<12;i++){
		 if(n%arr[i]==0){
			 flag=true;
		 }
	 }
	 if(flag)
	cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
