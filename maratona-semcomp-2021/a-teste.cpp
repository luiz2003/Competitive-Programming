//problem link
#include <bits/stdc++.h>

using namespace std;

int main(){
	string word;

	getline(cin, word);

	string res = "";

	if (word.length()>10){
		int num = word.length();
		string numW = to_string(num-2);
		res+=word[0];
		res+=numW;
		res+= word[num-1];
		cout << res;
	}
	else{
		cout << word;
	}
}