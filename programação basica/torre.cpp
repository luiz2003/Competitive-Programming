#include <iostream>
#include <algorithm>

using namespace std;

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
	int sums [n*n];
	int sumL, sumC;
	int p = 0;

	for (int i = 0; i < n; i++)
	{
		// mais facil somar todos os elementos da coluna e linha e tirar o 2*atual
		for (int j = 0; j < n; j++) 
		{
			sumL = 0;
			sumC = 0;
			
			 // soma da linha
			for (int k = 0; k < n; k++)
			{
				sumL = sumL + board[i][k];
			}
			//soma da coluna
			for (int l = 0; l < n; l++)
			{
				sumC = sumC + board[l][j];
			}

			sums[p] = sumC + sumL - 2*board[i][j];
			p++;
		}
	}

	int max_value = *max_element(sums,sums+n*n);
	
	cout << max_value; 
	
	return 0;
}