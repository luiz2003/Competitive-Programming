//problem link https://codeforces.com/problemset/problem/490/A
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

    vector <int> coders;
    vector <int> math;
    vector <int> PE;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 1){
            coders.push_back(i+1);
        }
        else if(x == 2){
            math.push_back(i+1);
        }
        else{
            PE.push_back(i+1);
        }
    }

    int class_lens[3] ={coders.size(), math.size(), PE.size()};
    int min = *min_element(class_lens, class_lens + 3);

    cout << min << endl;

    for(int i = 0; i < min; i++){
        cout << coders[i] << " " << math[i]<< " " << PE[i] << endl;
    }

    return 0;
}