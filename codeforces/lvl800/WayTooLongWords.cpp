//problem link: https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>

using namespace std;

int main (){
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string word;
		cin >> word;
		int length = word.length();

		if (length > 10){
			cout << word[0] << length-2 << word[length-1]<< endl;
		}
		else{
			cout << word<< endl;
		}
	}
	
}