//problem link
#include <bits/stdc++.h>

using namespace std;

bool comp(pair <int,int> i, pair <int, int> j){
    return(i.second < j.second);
}

int main(){
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int c = 0;

    pair <int,int> p[n];


    for (int i = 0; i < n; ++i){
        cin >> p[i].first >> p[i].second;
    }
    for (int i = 0; i < n; ++i){
        if (i==0){
            c = p[i].first + 10;
        }
        if (p[i].first - p[i-1].first >= 10){
            c = p[i].first + 10;
        }
        else{
            if (p[i].first < c){
                if (p[i].second == p[i-1].second){
                    c = p[i].first + 10 ;
                }
                else{
                    c +=10;
                }
            }
        }
    }


    cout << c;

    return 0;
}