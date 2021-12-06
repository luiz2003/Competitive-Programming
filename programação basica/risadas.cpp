#include <iostream>

using namespace std;

int main()
{
	string risada;
	cin >> risada;
	int length = risada.length();
	char sequencia[length];
	int boa = 1;
	int vogal = 0;
	
	for (int i = 0; i < length; ++i)
	{
		if (risada[i] == 'a' or risada[i]== 'e' or risada[i] == 'o' or risada[i] == 'i' or risada[i]== 'u')
		{
			sequencia[vogal] = risada[i];
			vogal++;
		}
	}

	int c = 0;
	for(int i = vogal - 1; i>=0; i--)
	{

		if (sequencia[i] == sequencia[c])
		{
			boa = 1;
		}
		else if(sequencia[i]!=sequencia[c]){
			boa = 0;
			break;
		}
		c++;
	}

	if (boa == 1)
	{
		cout << 'S';
	}
	else
	{
		cout << 'N';
	}

	return 0;
}