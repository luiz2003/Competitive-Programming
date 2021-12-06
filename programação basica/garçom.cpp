#include <iostream>
using namespace std;

int main (){
    int n, l, c, brken, i;
    brken = 0;
    i= 1;

    cin >> n;

    while (i <= n)
    {
        cin >> l >> c;
        
        if (l > c)
        {
            brken = brken + c;
        }
        i++;
    }
    
    cout << brken;

}