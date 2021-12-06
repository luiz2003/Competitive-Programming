//problem link https://codeforces.com/problemset/problem/1367/A
#include <bits/stdc++.h>

using namespace std;

void solve(){
    string str;

    getline(cin,str);

    string res = "";

    for (int i = 0; i < str.size(); i ++){
        if (i%2 == 0 or i == str.size() - 1)
        {
            res+= str[i];
        }
        
    }

    cout << res << endl;
}

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t-- >= 0)
    {
        solve();
    }
    
    return 0;
}