//problem link https://codeforces.com/problemset/problem/116/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;
	int in=0;
	int bigger = -1;
	for (int i = 0; i < n; ++i){
		int enter, out;
		cin >> out >> enter;
		in = in-out +enter;
		if (in >bigger){
			bigger = in;
		}
	}
	cout << bigger;
}				