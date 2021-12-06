#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int before[n];
	int after[n];

	for (int i = 0; i < n; ++i){
		cin >> before[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> after[i];
	}
	sort(before,before+n);
	sort(after,after+n);

	bool isIntact = true;

	for (int i = 0; i < n; ++i){
		
		if(before[i]==after[i]){
			isIntact = true;
		}
		else{
			isIntact = false;
			break;
		}
	}
	
	if(isIntact){
		cout << "Intacta";
	}
	else{
		cout << "Alterada";
	}

}