#include <iostream>

using namespace std;

int main(){
	
	int l, c, s;
	int ln, cl;
	char d;
	string aux;

	while(cin >> l >> c >> s, l!=0 or c!=0 or s!= 0){
		int res = 0;
		char arena[l][c];
		char cmds[s];

		cin.ignore();

		// entrada: ok
		for (int i = 0; i < l; i++)
		{
			getline(cin, aux);

			for (int j = 0; j < c; j++)
			{
				arena[i][j]=aux[j];
			}
		}

		//entrada:ok
		for (int i = 0; i < s; ++i)
		{
			cin >> cmds[i];
		}

		// acha  e armazena as posição e direção iniciais
		for (int i = 0; i < l; ++i)
		{
			for (int j = 0; j < c; ++j)
			{
				if (arena[i][j] == 'N' or arena[i][j] == 'S' or arena[i][j] == 'L' or arena[i][j] == 'O')
				{
					ln = i; 
					cl= j; 
					d = arena[i][j];
				}
			}
		}

		//executa as instruções
		for (int i = 0; i < s; ++i)
		{
			if (cmds[i]=='F')
			{
				if(d == 'N' and ln-1>=0 and arena[ln-1][cl]!='#'){
					ln--;
					if(arena[ln][cl]== '*'){ 
						res++;
						arena[ln][cl] = '.'; 
					}
				}if(d == 'L' and cl+1 < c and arena[ln][cl+1]!='#'){
					cl++;
					if(arena[ln][cl]== '*'){ 
						res++;
						arena[ln][cl] = '.';
					}
				}if(d == 'S' and ln+1<l and arena[ln+1][cl]!='#'){
					ln++;
					if(arena[ln][cl]== '*'){ 
						res++; 
						arena[ln][cl] = '.';
					}
				}if(d == 'O' and cl-1 >=0 and arena[ln][cl-1]!='#') {
					cl--;
					if(arena[ln][cl]== '*'){ 
						res++; 
						arena[ln][cl] = '.';
					}
				}
			}
			else{
				if (cmds[i] == 'D')
				{
					if (d == 'N')
					{
						d = 'L';
					}else if (d == 'L')
					{
						d = 'S';
					}else if(d == 'S'){
						d = 'O';
					}else if(d == 'O'){
						d = 'N';
					}
				}
				else if(cmds[i] == 'E'){
					if (d == 'N')
					{
						d = 'O';
					}else if (d == 'L')
					{
						d = 'N';
					}else if(d == 'S'){
						d = 'L';
					}else if(d == 'O'){
						d = 'S';
					}
				}
			}
		}
		cout << res << endl;
	}

}
	