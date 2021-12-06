#include <iostream>
using namespace std;

int main() {

    int n, a, d, sum, i;
    sum = 0;
    d=0;
    i=1;
    cin >> n;

    while (i <= n)
    {
        cin >> a;
        sum = sum + a;
        if (sum >= 1000000 and d == 0)
        {
            d = i;
        }
        i++;
    }
    
    cout << d;

}