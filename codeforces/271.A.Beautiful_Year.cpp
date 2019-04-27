/*
	Problem UrL	: https://codeforces.com/problemset/problem/271/A
	Problem Name: Beautiful_Year
	Author		: killer
	Date		: Apr 27, 2019
*/

#include <bits/stdc++.h>

using namespace std;

int n;

bool checkDistinct(int num){
	bool visited[10] = {false};
	int temp = num;
	while (num) {
		if (visited[num % 10])
			return false;

		visited[num%10] = true;

		num = num/10;
	}
	n = temp;
	return true;
}

int main(){
	int y;
	cin >> y;
	while(1){
		y += 1;
		if(checkDistinct(y)){
			cout << n << endl;
			break;
		}
	}
	return 0;
}
