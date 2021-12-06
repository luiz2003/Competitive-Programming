//problem link https://codeforces.com/problemset/problem/546/A
#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int k, n, w;

	cin >> k >> n >> w;

	int pr = 0;

	for (int i = 0; i < w; ++i)
	{
		pr+=(i+1)*k;
	}

	int r = pr-n;

	(r>0)? cout << r : cout << "0";
}