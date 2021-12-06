//problem link https://codeforces.com/problemset/problem/467/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;

	int f;
	int l[n];
	for (int i = 0; i < n; ++i){
		cin >> f;
		l[f-1]=i+1;
	}
	for (int i = 0; i < n; ++i){
		cout << l[i] << " ";
	}
}