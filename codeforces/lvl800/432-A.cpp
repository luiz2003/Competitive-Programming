//problem link https://codeforces.com/problemset/problem/432/As
#include <bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        
        if (x + k <= 5)
        {
            c++;
        }
    }
    
    cout << c/3;

    return 0;
}