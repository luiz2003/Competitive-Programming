#include <iostream>

using namespace std;

int main() {
    int n, c, d, de, dd;
    cin >> n;
    
    int fita[n];

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        fita[i] = c; 
    }

    for (int i = 0; i < n; i++)
    {   
        dd = 0;
        de = 0;
        
        if (i == 0 and fita[0]==-1)
        {
            while (i+dd <n and fita[i+dd] != 0)
            {
                dd++;
            }
            if (dd<=9)
            {
                cout << dd << " ";
            }
            if(dd>9){
                cout << 9 << " ";
            }
        }
        else if (i>0 and fita[i] == -1)
        {
            while( i+dd < n and fita[i+dd] != 0){
                dd++;
            }
            while (i-de >= 0 and fita[i-de] != 0)
            {
                de++;
            }
            int ans = n + 1;
            if(i+dd != n){
                ans = min(ans, dd);
            }      
            if(i-de!=-1){
                ans = min(ans, de);
            }
            cout << min(ans, 9) << " ";
            
        }
        else if(fita[i]== 0){
            cout << 0 << " ";
        }
    }
}