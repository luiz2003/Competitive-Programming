//problem link https://codeforces.com/problemset/problem/472/A
#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>
using namespace std;
  
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    int i = 4;

    while (isPrime(n-i))
    {
        i += 2;
    }
    
    cout << i << " " << n - i;

    return 0;
}