//problem link https://codeforces.com/problemset/problem/148/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int k, l,m,n,d;

	cin >> k >> l >> m >> n >> d;

	int r = 0;
	for (int i = 0; i < d; ++i){
		int x = i+1;
		if (x%k == 0 or x%l ==0 or x%m == 0 or x%n ==0 ){
			r++;
		}
	}
	

	cout << r;
}