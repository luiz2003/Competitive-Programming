//problem link https://codeforces.com/problemset/problem/1328/A
#include <bits/stdc++.h>

using namespace std;

void solve(){
	int a, b;
	cin >> a >> b;
	if (a%b == 0){
		cout << 0 << endl;
	}
	else{
		cout << b*((a/b)+1)-a << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}