//problem link https://codeforces.com/problemset/problem/791/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int c = 0;
	while(a<=b){
		c++;
		a = a*3;
		b= b*2;
	}
	cout << c;
}