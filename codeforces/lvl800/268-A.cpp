//problem link
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	int home[n];
	int guest[n];

	int c = 0;
	
	for(int i = 0; i < n; ++i){
		cin >> home[i] >> guest[i];
	}

	for(int x : guest){
		for (int y : home){
			if(y==x){
				c++;
			}
		}
	}

	cout << c ;

}