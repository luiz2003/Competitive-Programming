//problem link https://codeforces.com/problemset/problem/144/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int min = 101;
	int max = -1;
	int maxIndex;
	int minIndex;
	for (int i = 0; i < n; ++i){
		int x;
		cin >> x;
		if (x>max){
			max = x;
			maxIndex=i;
		}
		if (x<=min){
			min = x;
			minIndex =i;
		}
	}

	if (minIndex != n-1 or maxIndex != 0){
		if (minIndex < maxIndex){
			cout << maxIndex + (n-1 - minIndex) -1;
		}
		else{
			cout << maxIndex + (n-1 - minIndex);
		}
	}
	else{
		cout << 0;
	}
}