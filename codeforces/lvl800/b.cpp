//problem link
#include <bits/stdc++.h>

using namespace std;

int main(){
	#define int long long int
	int n, k;

	cin >> n >> k;

	int seq[n];
	for (int i = 0; i < n; ++i){
		cin >> seq[i];		
	}
	sort(seq,seq+n);
	
	if(k-1>0 and seq[k]!=seq[k-1] and k!=0){
		cout << seq[k-1];
	}else if(k==1 and n>=1 ){
		if(n==1){
			cout << seq[0];
		}
		else if(seq[0]<seq[1]){
			cout << seq[0];
		}
		else{
			cout << -1;
		}
	}
	else if(k==0){
		if (seq[0]==1){
			cout << -1;
		}
		else if (seq[0]>1){
			cout << seq[0]-1;
		}
	}
	else{
		cout << -1;
	}
}