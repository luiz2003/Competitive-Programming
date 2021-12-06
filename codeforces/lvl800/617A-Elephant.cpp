//problem link https://codeforces.com/problemset/problem/617/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int d;

	cin >> d;
	int c;
	
	if(d>=5){
		c= floor(d/5);
		if (d%5 != 0){
			c++;
		}
	}
	else{
		c=1;
	}
	cout << c;

}