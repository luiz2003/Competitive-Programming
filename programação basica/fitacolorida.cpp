#include <iostream>

using namespace std;

int main() {
    int n, c, ans, de, dd;
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
        ans=0;
        
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
            while( i+dd+1 < n and fita[i+dd] != 0){
                dd++;
            }
            while (i-de >= 0 and fita[i-de] != 0)
            {
                de++;
            }
            
            if(i+dd<n and i-de>=0 and fita[i+dd]==0){
                ans = min(dd,de);
                ans = min(ans,9);
            } 
            else{
                ans = min(de,9);
            }           
            cout << ans << " "; 
            /*if (dd<de and dd <= 9 and fita[i+dd]==0 )
            {
                cout << dd << " ";
            }
            else if(dd == de and dd <= 9){
                cout << dd << " ";
            }
            else if((de<dd and fita[i-de]==0 and de <= 9 ) or (de>dd and fita[i+dd]!=0 and fita[i-de]==0 and de <= 9)){
                cout << de << " ";
            }
            else if (de > 9 and dd > 9)
            {
                cout << 9 << " ";
            }
            */
        }
        else if(fita[i]== 0){
            cout << 0 << " ";
        }
    }
}