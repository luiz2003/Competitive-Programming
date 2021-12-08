//problem link https://codeforces.com/problemset/problem/758/A
#include <bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    int cit[n];
    int max = -1;
    int c = 0;
    
    for (int i = 0; i < n; i++){
        cin >> cit[i];
        if (cit[i] > max)
        {
            max = cit[i];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        c += max - cit[i];
    }

    cout << c;    

    return 0;
}