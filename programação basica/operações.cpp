#include <iostream>

using namespace std;

int main(){
	double x,y,res;
	char op;
	cin >> op;
	cin >> x >> y;
	
	cout.precision(2);
	cout.setf(ios::fixed);

	if(op == 'M'){
		res = x*y;	
	}
	else if(op == 'D'){
		res = x/y;
	}

	cout << res;

}