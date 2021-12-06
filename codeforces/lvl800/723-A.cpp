//problem link https://codeforces.com/problemset/problem/723/A
#include <bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);

//  bad solution
//    int x, y, z;
//
//    cin >> x >> y >> z;
    //if(x>y and x<z){
    //    cout << x-y + z-x;
    //}
    //else if (x<y and x>z){
    //
    //    cout << x-z + y-x;
    //}
    //else if (y>x and y<z)
    //{
    //    cout << y-x + z-y;
    //}
    //else if (x>y and y>z)
    //{
    //    cout << x - y + y-z;
    //}
    //else if (z>x and z<y)
    //{
    //    cout << z -x + y-z;
    //}
    //else if (z<x and z>y)
    //{
    //    cout << x-z + z-y;
    //}
    //else
    //{
    //    cout << "0";
    //}
    //
    // good solution
    int max = 0;
    int min = 101;
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        if (x>max)
        {
            max = x;
        }
        if (x<min){
            min = x;
        }   
    }
    
    cout << max - min;
    return 0;
}