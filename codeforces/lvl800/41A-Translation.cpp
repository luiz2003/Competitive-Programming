//problem link https://codeforces.com/problemset/problem/41/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	string w1,w2;
	cin >> w1 >> w2;

	string cor;
	for (int i = 0; i < w1.size(); ++i){
		int size = w1.size();
		cor+=w1[size-i-1];
	
	}

	if (w2==cor){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}