#include <bits/stdc++.h>

using namespace std;

int main(){
	int di, hi,mi,si;
	cin >> di >>  hi >> mi>> si;

	int df, hf, mf, sf;
	cin >> df >>  hf >> mf >> sf;


	//calcula os segundos
	int ds;
	int cs = 0;
	if (sf-si<0){
		cs++;
		ds = (sf+60)-si;
	}
	else{
		ds = sf - si;
	}
	// calcula os minutos
	int dm;
	int cm = 0;
	if (mf-cs-mi < 0){
		cm++;
		dm = (mf+60)-cs-mi;
	}
	else{
		dm = mf-cs-mi;
	}

	// calcula as horas
	int dh;
	int ch = 0;
	if ( hf - cm - hi<0)
	{
		ch++;
		dh = (hf+24-cm)-hi;
	}
	else{
		dh = (hf-cm)-hi;
	}

	// calcula o dia
	int dd;
	dd =df-ch-di;

	cout << dd << " " << dh << " " << dm << " " << ds;

}