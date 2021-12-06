#include <iostream>

using namespace std;

int fibn(int n){
	if (n == 0 or n == 1){
		return 1;
	}
	return fibn(n-1) + fibn(n-2);
}

int main(){
	int n;
	cin >> n;

	cout << fibn(n);

}