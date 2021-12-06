//problem link https://codeforces.com/problemset/problem/520/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <char> alphabet;

	char l = 'a';
	
	for (int i = 0; i < 26; ++i){
		alphabet.push_back(l+i);
	}
	
	int n;
	cin >> n;

	if (n<26){
		cout << "NO";
		return 0;
	}

	char word [n];

	for (int i = 0; i < n; ++i){
		cin >> word[i];
	}

	for (char i : alphabet){
		bool p  = false;
		for (char j : word){
			if (i == tolower(j)){
				p = true;
			}
		}
		if (!p){
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";

}