//problem link
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;

	cin >> n;

	int casas[n];
	for (int i = 0; i < n; ++i){
		cin >> casas[i];
	}

	int k;

	cin >> k;
	int i = 0;
	for(int x : casas){
		int ini = i, meio, fim = n-1;
		while(ini <= fim){
			meio = (ini + fim)/2;
			if (x + casas[meio] == k){
				cout << x << " " << casas[meio];
				return 0;
			}
			else if(x+casas[meio]<k){
				ini = meio + 1;
			}
			else{
				fim = meio - 1; 
			}
		}
	}
	i++;
}