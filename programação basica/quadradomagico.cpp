#include <iostream>

using namespace std;

int main (){

    int n,mag,sum,l,c,d;
    l=1;
    c=1;
    d=1;
    mag = 0;
    
    cin >> n;

    int quadrado[n][n];

    //entrada
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> quadrado[i][j];
        }
    }

    //confere qual o numero magico
    for(int j = 0; j < n; j++){
        mag = mag + quadrado[0][j];
    }
    
    // confere soma das linhas
    for(int i=0; i < n; i++){
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = quadrado[i][j] + sum;
        }
            if (sum!= mag){
            l = -1;
            break;
        }
    }
    //confere soma de colunas se todas as linhas estiverem ok
    if (l==1)
    {
        for (int j = 0; j < n; j++)
        {
            sum=0;
            for (int i = 0; i < n; i++)
            {
                sum = sum + quadrado[i][j];
            }
            if (sum != mag)
            {
                c = -1;
                break;
            } 
        }
        
    }
    //confere soma das diagonais se linhas e colunas estão ok
    if (l==1 and c == 1)
    {
        sum = 0;
        // confere a diagonal principal
        for (int i = 0; i < n; i++){
            sum = sum + quadrado[i][i];
            
        }
        //confere a outra diagonal se a principal estiver ok
        if (sum==mag)
        {
            sum = 0;
            int j = n-1;
            for (int i = 0; i < n ; i++)
            {
                sum = sum + quadrado[i][j];
                j--;
            }
        }
        if (sum != mag)
        {
            d = -1;
        }
         
    }
    
    if (l == -1 or c == -1 or d == -1){
        cout << -1;
    }
    else{
        cout << mag;
    }
}