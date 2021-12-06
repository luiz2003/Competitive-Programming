#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i){
		int n,k;
		int c = 0;
		cin >> n >> k;
		int ex[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> ex[i];
			if (i!=0 and ex[i]-ex[i-1]>k)
			{
				int dif = ex[i]-ex[i-1];
				if (dif%k==0)
				{
					c+=(dif/k)-1;
				}
				else{
					c+= floor(dif/k);
				}
			}
		}
		cout << c << endl;
	}

}