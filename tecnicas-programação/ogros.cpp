#include <bits/stdc++.h>

using namespace std;

int n;

vector<int> faixas;
const int INF = 1000000001;

int getFaixa(int m){
    int ini = 1, meio,fim=n-1;
    while(ini<=fim){
        meio = (ini+fim)/2;
        if (faixas[meio]==m){
            return meio;
        }
        if (m>=faixas[n-1]){
            return n-1;
        }
        else if(faixas[meio]>m and faixas[meio-1]<=m){
            return meio-1;
        }
        else if (faixas[meio]<m){
            ini = meio +1;
        }
        else if (faixas[meio]>m){
            fim = meio-1;
        }
    }
    return -1;
}

int main(){
    int m;
    
    cin >> n >> m;
    
    faixas.push_back(INF*-1);
    for(int i = 0; i<n-1;i++){
        int input;
        cin >> input;
        faixas.push_back(input);
    }
    faixas.push_back(INF);

 
    int premios[n];
    for(int i = 0; i<n;i++){
        cin >> premios[i];
    }
    
    int ogros[m];
    for (int i = 0; i<m;i++){
        cin >> ogros[i];
    }
    for(int m : ogros){
       cout << premios[getFaixa(m)] << " "; 
    }
}
