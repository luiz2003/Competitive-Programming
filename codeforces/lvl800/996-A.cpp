//problem link https://codeforces.com/problemset/problem/996/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int s = 0;

	// i could've done this with an array lul
	
	s+= n/100;

	n = n%100;

	s+= n/20;

	n = n%20;

	s+= n/10;

	n = n%10;

	s+= n/5;

	n = n%5;

	s+= n/1;

	cout << s;

}