//problem link https://codeforces.com/problemset/problem/977/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	#define int long long int
	int n,k;

	cin >> n >> k;

	for (int i = 0; i < k; ++i){
		if (n%10 != 0){
			n--;
		}
		else{
			n = n/10;
		}
	}

	cout << n;
}