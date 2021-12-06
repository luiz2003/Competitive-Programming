//problem link
#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
        
    int k, r;
    cin >> k >> r;

    int p = 1;
    while ((k*p)%10 != r and (k*p)%10 != 0)
    {
        p++;
    }
    cout << p;

    return 0;
}