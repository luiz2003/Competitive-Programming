#include <iostream>
using namespace std;

int main (){
    int p, r;
    
    cin >> p >> r;

    if(p==1 and r ==0){
        cout << "B";
    }
    else if(p == 0 and (r == 0 or r == 1) ){
        cout << "C";
    }
    else if(p == 1 and r == 1){
        cout << "A";
    }

}
