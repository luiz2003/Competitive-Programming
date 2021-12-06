#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    double v;
    cin >> n;
    cout.precision(4);
    cout.setf(ios::fixed);

    for (int i = 1; i <= n; i++){
        cin >> v;

        cout << sqrt(v) << endl;
    }
}