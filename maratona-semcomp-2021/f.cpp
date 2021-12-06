//problem link
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t;

	cin n >> t;
	int m[n];

	for (int i = 0; i < n; ++i){
		cin >> m[i];
	}

	int r = 1;
	
	while(true){
		int p = 0;
		for (int i = 0; i <n ; ++i){
			p+= i/m[i];
		}
		if (p>=t){
			cout << r;
			break;
		}
		r++;
	}
}