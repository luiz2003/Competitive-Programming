//problem link https://codeforces.com/problemset/problem/228/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n[4];
	for (int i = 0; i < 4; ++i){
		cin >> n[i];
	}
	
	sort(n,n+4);

	int r = 0;

	for (int i = 0; i < 4; ++i){
		if(i+1<4 and n[i]==n[i+1]){
			int c = i;
			while(c+1<4 and n[c+1]==n[c]){
				r++;
				c++;
			}
			i=c;
		}
	}

	cout << r ;
}