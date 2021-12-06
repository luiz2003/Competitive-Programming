#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

	int n;
	cin >> n;
	int b[n];
	int aux[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
		aux[i] = b[i];
	}

	sort(b, b+n);

	int unsorted = 0;
	int mov[n];
	
	for (int i = 0; i < n; ++i)
	{
		if (b[i] != aux[i])
		{ 
			mov[unsorted++] = b[i];
		}
	}

	cout << unsorted << endl ;

	for (int i = 0; i < unsorted; ++i)
	{
		cout << mov[i] << " ";
	}
}