#include <iostream>
using namespace std;

int main(){
//  Este é um comentario
 /* 
    Isso é um comentário de várias linhas
 */

    int x ;
    cin >> x ;

    if(x>=0 and x%2==0) {
        
        cout << "O valor de x e par e positivo";

    }
    else {
        if(x<0 and x%2 == 0) {
            
            cout << "O valor de x é negativo e par";

        }
        else if(x <= 0 and x%2 == 1){
            
            cout << "O valor de x é impar e positivo";

        }
        else {
            
            cout << "O valor de e impar e negativo";

        }
    }

}