//problem link https://codeforces.com/problemset/problem/59/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	string word;

	cin >> word;
	int u =0;
	int l =0;
	
	for (int i = 0; i < word.length(); ++i){
		if (islower(word[i])){
			l++;
		}
		else{
			u++;
		}
	}

	if(l>=u){
		for (int i = 0; i < word.length(); ++i){
			if (isupper(word[i])){
				word[i]=tolower(word[i]);
			}
			
		}
	}
	else{
		for (int i = 0; i < word.length(); ++i){
			if(islower(word[i])){
				word[i]=toupper(word[i]);
			}
		}
	}
	cout << word;
}