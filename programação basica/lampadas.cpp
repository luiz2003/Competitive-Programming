#include <iostream>
using namespace std;

int main(){
    int n, l, a, b;
    cin >> n;
    a = 0;
    b =0;

    for(int i = 0; i < n; i++){
        cin >> l;

        if (l == 1)
        {
            if (a == 0)
            {
                a = 1;
            }
            else if( a == 1){
                a = 0;
            }
            
        }
        else if (l == 2 ){
            if ( a == 1 and b == 0)
            {
                a = 0;
                b = 1;
            }
            else if(a == 1 and b == 1){
                a = 0;
                b = 0;
            }
            else if(a == 0 and b == 1){
                a = 1;
                b = 0;
            }
            else if(a == 0 and b == 0){
                a = 1;
                b = 1;
            }
        }
    }

    cout << a << endl << b;
}