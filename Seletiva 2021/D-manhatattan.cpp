#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;

int main(){
	cout<<fixed<<setprecision(4);
	int x1, y1;
	int x2,y2;
	cin >> x1 >> y1;
	cin >>x2 >> y2;

	int man = abs(x1-x2) + abs(y1-y2);
	double x = x1-x2;
	double y = y1-y2;
	double powx = pow(x,2);
	double powy = pow(y,2);
	double powsum = powx + powy;
 
	cout << man - sqrt(powsum);
}