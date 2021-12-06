//problem link https://codeforces.com/problemset/problem/110/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	#define int long long int
	string number;
	cin >> number;
    int c = 0;
	for (int i = 0; i < number.length(); ++i){
		if ((number[i]=='4') or (number[i]=='7')){
			c++;
		}
	}

	bool yes = true;
	string b = to_string(c);
	for (int i = 0; i < b.length(); ++i){
		if (b[i]!='7' and b[i]!= '4'){
			yes = false;
		}
	}

	if (yes){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}