#include <bits/stdc++.h>

using namespace std;

int main(){
	#define int long long int
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i){
		int x;
		cin >> x;
		int expoenteMaior = ceil(log(x)/log(2));
		int expoenteMenor = floor(log(x)/log(2));
		int next = pow(2,expoenteMenor);
		int before = pow (2,expoenteMaior);
		if (abs(x-next)<abs(x-before)){
			cout << abs(x-next) << " ";
		}
		else{
			cout << abs(x-before) << " ";
		}
	}
}