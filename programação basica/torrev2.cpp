#include <iostream>
#include <algorithm>

using namespace std;

//nessa versão vou tentar computar a soma de cada posição fora de um loop principal e armazenar isso e dps
// comparar elas
int main()
{
	int n;
	cin >>  n;
	int board [n][n];

	//pega os valores do tabuleiro
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++){
			cin >> board[i][j];
		}	
	}
	
	int sumL, sumC;
	int sum;
	int bigsum =-1;
	int sumsL[n];
	int sumsC [n];

	//soma dos valores de cada coluna
	for (int j = 0; j < n; j++)
	{
		sumC = 0;
		for(int i = 0; i<n; i++){

			sumC = sumC + board[i][j];
		}
		sumsC [j] = sumC;
	}
	//soma dos valores de cada linha
	for (int i = 0; i < n; i++)
	{
		sumL = 0;
		for(int j = 0; j<n; j++){

			sumL = sumL + board[i][j];
		}
		sumsL[i] = sumL;
	}
	for(int i = 0; i<n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum = sumsL[i] + sumsC[j] - 2*board[i][j];
			if (sum > bigsum){
				bigsum = sum;
			}
		}
	}

	cout << bigsum; 
	
	return 0;
}