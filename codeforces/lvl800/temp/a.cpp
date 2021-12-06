//problem link
#include <bits/stdc++.h>

using namespace std;

void solve(int x){
	vector <int> res;
	string str = to_string(x);
	int l = str.length();
	int c = 0;
	int v = 1;
	for (int i = l-1; i >=0; --i){
		if(str[i]!='0'){
			c++;
			int add = (str[i]-'0')*v;
			res.push_back(add);
		}
		v*=10;
	}
	if(c==0){
		c=1;
	}
	cout << c << "\n";
	for (auto ir = res.begin(); ir != res.end(); ++ir){
        cout << *ir << " ";
	}
	cout << "\n";
}

int main(){
	int n;

	cin >> n;

	for (int i = 0; i < n; ++i){
		int x;
		cin >> x;
		solve(x);
	}
}