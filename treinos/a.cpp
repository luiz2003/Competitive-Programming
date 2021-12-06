//problem link
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	int x;
	cin >> n >> k;
	vector <int> std;
	vector <int> res;
	for (int i = 0; i <n; ++i){
		int a;
		cin >> a;
		std.push_back(a);


		bool u = true;
		if (i==0){
			res.push_back(1);
		}
		else{
			for (int j = 0; j < i; ++j){
				if (std[j] == std[i]){
					u = false;
					break;
				}
			}
			if(u){
				res.push_back(i+1);
			}
		}
	}

	
	if(res.size()>=k){
		cout << "YES" << endl;
		for (int i = 0; i < k; ++i){
			cout << res[i] << " ";
		}
	}
	else{
		cout << "NO";
	}

}