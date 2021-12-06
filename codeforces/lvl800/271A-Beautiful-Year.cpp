//problem link https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>

using namespace std;

bool digits(int number){
	string num = to_string(number);
	sort(num.begin(), num.end());
	return unique(num.begin(), num.end()) == num.end();
}
int main(){
	int n;
	cin >> n;
	n++;
	while(!digits(n)){
		n++;
	}
	cout << n;
}