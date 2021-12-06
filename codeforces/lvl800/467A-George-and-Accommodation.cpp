//problem link https://codeforces.com/problemset/problem/467/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int r = 0;

	for (int i = 0; i < n; ++i){
		int p,q;
		cin >> p >> q;
		if (p+2<=q){
			r++;
		}
	}
	cout << r;
}