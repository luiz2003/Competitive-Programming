//problem link
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

        int p=0, c=0, r=0;

        for(int i = 0; i < n; ++i){
            int x;

            cin >> x;

            if (x<0 and p==0){
                r++; 
            }
            else{
                p+=x;
            }
            
        }
        cout << r;
    return 0;
}