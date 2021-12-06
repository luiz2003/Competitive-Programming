//problem link https://codeforces.com/problemset/problem/1399/A
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    vector <int> arr;

    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < arr.size()-1; ++i){
        if(abs(arr[i+1] - arr[i])<=1){ 
            arr.erase(arr.begin() + i);
            i = -1;
        }
    }

    (arr.size() == 1) ? cout << "YES" << "\n" : cout << "NO" << "\n";
}

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);

    int t; 
     
    cin >> t;
    
    for(int i = 0; i < t; ++i){
        solve();
    }

    return 0;
}