//problem link https://codeforces.com/problemset/problem/344/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;
	int c = 0;
	for (int i = 0; i < n; ++i){
		int mag;
		int lastMag;
		cin >> mag;
		if (i==0){
			c++;
		}
		else{
			if (lastMag!=mag){
				c++;
			}
		}
		lastMag=mag;
	}
	cout << c;
}