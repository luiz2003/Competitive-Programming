#include <iostream>

using namespace std;

int n, v[100100];

int soma_vetor(int l, int s[]){
	int sum=0;
	for(int i = 0; i<n ; i++){
		sum+=v[i];
	}
	return sum;
}

int main(){
	
	
	cin >> n;
	
	for(int i=0;i<n;i++)
		cin >> v[i];

	cout << soma_vetor(n,v) << "\n";
}
