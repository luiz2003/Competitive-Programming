#include <iostream>
using namespace std;

int main (){

    int a, b , avg;

    cin >> a >> b;
    avg = (a+b)/2;

    if (avg >= 7){
        cout << "Aprovado";
    }
    else if(avg<7 and avg >= 4){
        cout <<"Recuperacao";
    }
    else{
        cout << "Reprovado";
    }

}