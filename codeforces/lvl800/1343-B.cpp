// problem link https://codeforces.com/problemset/problem/1343/B
#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;

  cin >> n;

  if ((n % 2 == 0) and ((n/2) % 2 == 0)) {
    cout << "YES" << endl;
    int sol[n];
    
    int sumEven = 0;
    int sumOdd = 0;

    for(int i = 0; i<n/2; i++){
      sol[i] = (i+1)*2;
      sumEven += (i+1)*2;
      
      if (i < n/2 - 1)
      {
        sol[n/2 + i] = (i+1)*2 -1; //put odd numbers in order until the last one
        sumOdd += (i+1)*2 - 1;
      }
      else
      {
        sol[n - 1] =  sumEven - sumOdd;
      }
    }

    for(int i : sol){
      cout << i << " ";
    }
    
    cout << endl;

  } else {
    cout << "NO" << endl;
  }
}

int main() {
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