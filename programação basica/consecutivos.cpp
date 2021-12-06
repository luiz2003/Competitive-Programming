#include <iostream>
using namespace std;

int main(){
    int n, v, lastv, s, bigs;
    cin >> n;
    s = 1;
    bigs = 1;

    for (int i = 0; i < n; i++){
        cin >> v;
        if (i != 0){
        //contar intervalo, armazenar invervalo maior, comparar intervalo dps que terminado com o maior
        //resetar variavel s se intervalo terminar
            if (v == lastv)
            {
                s++;
            }
            else if (v != lastv){
                if(s > bigs){
                    bigs=s;
                }
                s = 1;
            }
        }
        lastv = v;
    }
    
    if(bigs>=s){
        cout << bigs;
    }
    else if(s>bigs){
      cout << s;
    }
}
