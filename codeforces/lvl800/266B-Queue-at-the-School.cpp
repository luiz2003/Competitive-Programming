//problem link https://codeforces.com/problemset/problem/266/B
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t;
	cin >> n >>t;
	string queue;
	cin >> queue;

	for (int i = 0; i < t; ++i){
		for (int j = 1; j < n; ++j){
			if(queue[j]=='G' and queue[j-1] =='B'){
				queue[j-1]='G';
				queue[j]='B';
				j++;
			}
		}
	}
	cout <<queue;
}