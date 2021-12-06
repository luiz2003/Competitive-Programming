//problem link: https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
 
using namespace std;

int main(){
	string sum;
	cin >> sum;
	sort(sum.begin(),sum.end());
	

	
	for(int i = 0; i< sum.length(); i++){
		if(sum[i]!='+'){
			cout << sum[i];
			if(i+1 < sum.length()){
				cout << '+';
			} 
		}
	}
}