//problem link https://codeforces.com/problemset/problem/510/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);

        int n, m;

        cin >> n >> m;

        bool right = true;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if (i%2 == 0)
                {
                    cout << '#';
                }
                else if (right)
                {
                    if (j<m-1)
                    {
                        cout << ".";
                    }
                    else{
                        cout << "#";
                    }
                    
                }
                else{
                    if (j==0)
                    {
                        cout << "#";
                    }
                    else{
                        cout << ".";
                    }
                }
                
                
            }
            cout << '\n';
            if(i%2 == 1){
                right = !right;
            }
        }

    return 0;
}