#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	string aux;
	int zerotonine[] = {0,1,2,3,4,5,6,7,8,9};
	int counter[10]= {0,0,0,0,0,0,0,0,0,0};

	for (int i = 0; i <n; i++)
	{
		cin >> aux;
		
		int length = aux.length();
		
		for (int k = 0; k < length; k++)
		{
			counter[aux[k]-'0']++;
		}
	}

	for (int i = 0; i <10; i++)
	{
		cout<< i << " - " << counter[i] <<endl;
	}
}