//problem link https://codeforces.com/problemset/problem/486/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	#define int long long int

	int n;
	cin >> n;
	
	(n%2==0)? cout << n/2 : cout << -1*(n+1)/2;	
}