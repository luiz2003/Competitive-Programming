#include <iostream>

using namespace std;

int main (){
    int campo[50];
    int n, v, b;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> campo[i];
    }
    for (int i = 0; i < n; i++)
    {
        b = 0;

        if (campo[i] == 1)
        {
            b++;
        }
        if (i < n-1 and campo[i+1] == 1)
        {
            b++;
        }
        if (i != 0 and campo[i-1] == 1)
        {
            b++;
        }
        cout << b << endl;
    }
}