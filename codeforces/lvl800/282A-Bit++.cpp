//problem link: https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int x = 0;
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string statement;
		cin >> statement;
		for (int i = 0; i < 3; ++i){
			
			if (statement[i]=='+'){
				x++;
				break;
			}
			else if(statement[i]=='-'){
				x--;
				break;
			}
		}
	}
	cout << x;
}