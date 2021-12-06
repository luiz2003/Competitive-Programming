//problem link https://codeforces.com/problemset/problem/1030/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	bool easy = true;

	for (int i = 0; i < n; ++i){
		int x;
		cin >> x;

		if (x==1){
			easy = false;
			break;
		}
	}

	(easy)? cout << "EASY" : cout << "HARD";
}