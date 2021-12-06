#include <bits/stdc++.h>

using namespace std;

int main(){
	int x1,y1,x2,y2,i1,j1,i2,j2;
	cin >> x1 >> y1 >> x2 >> y2 >> i1 >> j1 >> i2 >> j2;
	if(i1>=x1 and i1 <=x2 and j1>=y2 and j1<=y1){
		cout << "Existe interseção entre os quadros";
	}
	else if(x1>=i1 and x1 <=i2 and y1>=j2 and y1<=j1){
		cout << "Existe interseção entre os quadros";
	}
	else{
		cout << "Não existe interseção entre os quadros";
	}

	
}