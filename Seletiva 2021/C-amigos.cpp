#include <iostream>
#include <stdlib.h>


using namespace std;

int main(){
	#define int long long int
	int n;
	cin >> n;

	int amigos[n];
	int maior = -10e18;
	int menor = 10e18;
	int maiorIndex;
	int menorIndex;


	for (int i = 0; i < n; ++i)
	{
		cin >> amigos[i];
		if (amigos[i]>maior)
		{
			maior = amigos[i];
			maiorIndex = i+1;
		}
		if (amigos[i]<menor)
		{
			menor = amigos[i];
			menorIndex = i+1;
		}
	}
	if (menorIndex<maiorIndex)
	{
		cout<< menorIndex << " "<< maiorIndex;
	}
	else if(menorIndex>maiorIndex){
		cout << maiorIndex << " " << menorIndex;
	}
}