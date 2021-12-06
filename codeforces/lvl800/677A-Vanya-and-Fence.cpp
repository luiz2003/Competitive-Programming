//problem link https://codeforces.com/problemset/problem/677/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,h;

	cin >> n >> h;
	int h2;
	int w=0;
	for (int i = 0; i < n; ++i){
		cin >> h2;
		if (h2>h){
			w+=2;
		}
		else{
			w++;
		}
	}
	cout << w;
}