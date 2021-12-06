//problem link https://codeforces.com/problemset/problem/61/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	string str1;
	string str2;
	string ans;

	getline(cin, str1);
	getline(cin, str2);
	
	for (int i = 0; i < str1.size(); ++i){
		if(str1[i]!=str2[i]){
			ans.append("1");
		}
		else{
			ans.append("0");
		}
	}

	cout << ans;
}