#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string placa;
		cin >> placa;
		if (placa[4]<'0' or placa[4]>'9'){
			cout << "Novo" << endl;
		}
		else{
			cout << "Antigo" << endl;
		}
	}
}