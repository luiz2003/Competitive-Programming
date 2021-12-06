// problem link: https://codeforces.com/problemset/problem/266/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n
	char stones[n];
	int c =0;
	for (int i = 0; i < n ; ++i)
	{
		cin >> stones[i];
		if (i > 0 and stones[i-1]==stones[i])
		{
			c++;
		}
	}

	cout << c;

}	