//problem link https://codeforces.com/problemset/problem/734/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int a= 0;
	int d =0;
	string game;
	cin >> n;
	cin >> game;
	for (int i = 0; i < n; ++i){
		if (game[i]=='A'){
			a++;
		}
		else{
			d++;
		}
	}
	if (a>d){
		cout << "Anton";
	}
	else if(a<d){
		cout << "Danik";
	}
	else{
		cout << "Friendship";
	}
}