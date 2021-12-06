//problem link https://codeforces.com/problemset/problem/469/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,p,q;
	cin >> n;
	int lvls[n];
	int c = 0;
	int x;
	cin >> p;
	for (int i = 0; i < p; ++i){
		cin >> x;
		if(x!=0 and lvls[x-1]!=x){
			lvls[x-1] = x;
			c++;
		}
	}
	cin >> q;
	for (int i = 0; i < q; ++i){
		cin >> x;
		if(x!=0 and lvls[x-1]!=x){
			lvls[x-1] = x;
			c++;
		}
	}
	


	(c==n)? cout << "I become the guy." : cout << "Oh, my keyboard!";
}