// problem link: https://codeforces.com/problemset/problem/158/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	
	int participants[n];
	for (int i = 0; i < n; ++i){
		cin >> participants[i];
	}
	int k_score = participants[k-1];
	int c = 0;
	for (int i = 0; i < n; ++i)
	{
		if (participants[i]>=k_score and participants[i]>0)
		{
			c++;
		}
	}
	cout << c;
}