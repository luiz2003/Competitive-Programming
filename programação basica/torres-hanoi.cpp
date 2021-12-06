#include <iostream>
#include <math.h>

using namespace std;


int hanoi(int n){
	if(n == 1){
		return 1;
	}
	else{
	return 2*hanoi(n-1) +1;
	}
}

int main(){

	int n;
	int c = 1;

	while(cin >> n, n != 0){
		
		cout << "Teste " << c << endl;
		cout << hanoi(n);
		cout << endl ;
		
		c++;
	}
}