#include <bits/stdc++.h>

using namespace std;
bool isPrime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}

int main(){
	int n;
	cin >> n;
	int pares = 0;
	int impares = 0;
	int primos = 0;

	for (int i = 0; i < n; ++i){
		int x;
		cin >> x;
		if (x%2==0){
			pares++;
		}
		if(x%2==1){
			impares++;
		}
		if(isPrime(x)){
			primos++;
		}
	}

	cout<< pares << " valor(es) par(es)" <<endl;
	cout << impares << " valor(es) impar(es)"<<endl;
	cout << primos << " valor(es) primo(s)"<<endl;
}