//problem link
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b;
    cin >> a >> b;
    
    int dif = abs(a-b);
    int r = 0;
    
    for(int i = 10; i >=1 ; --i){
        r+= dif/i;
        dif -= (dif/i) * i;
    }

    cout << r << endl;
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