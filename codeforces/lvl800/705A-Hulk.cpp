//problem link https://codeforces.com/problemset/problem/705/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	string e;

	for (int i = 1; i <= n; ++i){
		if (i%2 == 1){
			e.append("I hate ");
		}else{
			e.append("I love ");
		}
		if (i < n){
			e.append("that ");
		}
		else if(i == n){
			e.append("it");
		}
	}
	cout << e;

}