//problem link https://codeforces.com/problemset/problem/1154/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    
    vector <int> nums;
    int maior = 0;
    for(int i = 0; i < 4; ++i){
        int x;
        cin >> x;
        nums.push_back(x);
        if(x>maior){
            maior = x;
        }
    }

    for(int i : nums){
        if (maior - i > 0)
        {
            cout << maior - i << " ";
        }
        
    }

    return 0;
}