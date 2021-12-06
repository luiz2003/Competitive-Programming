//problem link https://codeforces.com/problemset/problem/1335/A
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    if (n%2 == 0)
    {
        cout << n/2 - 1 << endl;
    }
    else{
        cout << n/2 << endl;
    }
    
}

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    

    return 0;
}