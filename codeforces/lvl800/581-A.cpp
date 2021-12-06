//problem link https://codeforces.com/problemset/problem/581/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);

    int a,b;

    cin >> a >> b;


    if (a<=b)
    {
        cout << a << " " << (b-a)/2;
        
    }
    else{
        cout << b << " " << (a-b)/2;
    }
    


    return 0;
}