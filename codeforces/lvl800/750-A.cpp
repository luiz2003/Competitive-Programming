//problem link https://codeforces.com/problemset/problem/750/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);

    int time = 60*4;
    int n, k;
    cin >> n >> k;
    int c = 0;
    int p = 0;
    for(int i = 1; i <= n; ++i){
        if((c + i*5) <= (time-k)){
            c += i*5;
            p++;
        }
        else{
            break;
        }
    }
    
    cout << p ;
    
    return 0;
}