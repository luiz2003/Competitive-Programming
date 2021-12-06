//problem link https://codeforces.com/problemset/submit
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	double sum = 0;

	for (int i = 0; i < n; ++i){
		double d;
		cin >> d;
		sum += d/100;
	}

	cout << (sum/n)*100;
}