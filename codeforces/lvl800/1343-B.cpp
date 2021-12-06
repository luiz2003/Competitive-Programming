// problem link https://codeforces.com/problemset/problem/1343/B
#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;

  cin >> n;

  if (!(n % 2 == 0 and (n % 2) % 2 == 0)) {
    cout << "YES" << endl;

  } else {
    cout << "NO" << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(0);

  return 0;
}
