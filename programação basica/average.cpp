
#include <iostream>

using namespace std;

int main(){

    int x; //declara a variável x inteira
    double y;

    cin >> x ; // pegue o valor do input e atribua a x e o mesmo a y
	cin >> y ;
    
    int sum = x+y;
    int average = sum/2;
	cout << average;

    return(0);
}