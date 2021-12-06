//problem link https://codeforces.com/problemset/problem/443/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	string set;
	getline(cin,set);

	int c = 0;

	for (int i = 1; i < set.size(); ++i){
		
		if (i == 1 and set[1] != '}'){
			c++;
		}
		else if(set[i]>='a' and set[i]<='z'){
			
			bool u = true;
			
			for (int j = 0; j < i; ++j){
				if (set[j]==set[i]){
					u = false;
					break;
				}
			}
			
			if (u){
				c++;
			}
		}
	}

	cout << c;
}