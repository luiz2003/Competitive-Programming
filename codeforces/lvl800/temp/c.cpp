//problem link
#include <bits/stdc++.h>

using namespace std;
void solve(int n, int k){

	cout << n*(k/n) + (k-n)<< "\n";
}
int main(){
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i){
		int n,k;
		cin >> n >>k;
		solve(n,k);
	}
}