//problem link https://codeforces.com/problemset/problem/785/A
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

    int f = 0;
    for(int i = 0; i <= n; ++i){
        string polyhedron;
        getline(cin, polyhedron);
        if (polyhedron.compare("Tetrahedron")==0)
        {
            f+= 4;
        }
        else if(polyhedron.compare("Cube")==0){
            f+= 6;
        }
        else if(polyhedron.compare("Octahedron")==0){
            f+= 8;
        }
        else if(polyhedron.compare("Dodecahedron")==0){
            f+= 12;
        }
        else if(polyhedron.compare("Icosahedron")==0){
            f+= 20;
        }
        
    }
    cout << f;

    return 0;
}