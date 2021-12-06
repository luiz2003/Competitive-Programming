//problem link https://codeforces.com/problemset/problem/155/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);

    int n;
    int c = 0;
    cin >> n;
    int max, min;
    bool b;

    for(int i = 0; i < n; ++i){
        int x;

        cin >> x;
        
        b = false;

        if (i == 0)
        {
            max = x;
            min = x;
        }
        else{
            if (x > max)
            {
                max = x;
                c++;
                b = true;
            }
            else if (x < min)
            {
                min = x;
                if (!b)
                {
                    c++;
                }   
            }
        }
    }

    cout << c;

    return 0;
}