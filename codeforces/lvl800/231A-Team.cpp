//problem link: https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;
	int c= 0;
	int problems[n][3];

	for(int i=0; i<n; i++){

		int aux = 0;

		for(int j = 0; j<3 ; j++){
			cin >> problems[i][j];
			if ( problems[i][j]==1)
			{
				aux++;
			}
		}

		if (aux>=2){
			c++;
		}
	}
	

	cout << c;
}