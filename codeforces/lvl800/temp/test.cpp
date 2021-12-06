#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, m;
  cin>>n>>m;
  int rooms[n];
  int letters[m];
 
  for (int i=0; i<n; i++) {
    cin>>rooms[i];
  }
 
  for (int i=0; i<m; i++) {
    cin>>letters[i];
  }
  
  for (int i = 0; i < m; ++i){
    cout << letters[i] << " ";
  }
}