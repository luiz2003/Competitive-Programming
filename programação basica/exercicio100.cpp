#include <iostream>

using namespace std;

int main(){
    int n, v, counter;
    counter = 0;
    cin >> n;

    int codigo[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v;
        codigo[i] = v;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (i<=n-3)
        {
            if (codigo[i]== 1 and codigo[i+1] == 0 and codigo[i+2] == 0){
                counter ++;
            }
        }  
    }
    
    cout << counter;
}