#include <bits/stdc++.h>

using namespace std;

int main(){
    #define int long long int

    int n,m;
    
    cin >> n >> m;

    vector <int> dorms;

    for ( int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i==0){       
            dorms.push_back(x);
        }
        else{
            dorms.push_back(x + dorms[i-1]);
        }
    }

    int letters[m];
    for (int i = 0; i < m; i++) {
        cin >> letters[i];
    }


    for (int x : letters){
        
        int ini = 0, fim = n-1, meio;
        
        while(ini <= fim){
            
            meio = (ini + fim)/2;
            
            if (dorms[0]>=x){
                cout << 1 << " " << x << endl;
                break;
            }
            else if (dorms[n-1]<=x){
                cout << n << " " << x - dorms[n-2]  << endl;
                break;
            }
            else if (dorms[meio]>= x and dorms[meio-1] < x){
                cout << meio+1 << " "<< x - dorms[meio-1] << endl;
                break;
            } 
            else if (dorms[meio]>x and dorms[meio-1]>=x){
                fim = meio-1;
            }
            else if (dorms[meio]<x){
                ini = meio+1;
            }
        }
    }
}