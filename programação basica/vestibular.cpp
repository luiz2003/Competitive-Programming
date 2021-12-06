#include <iostream>

using namespace std;

int main(){
	
	int q,a=0;
	string gab, aluno;
	cin >> q ;
	cin >> gab >> aluno;
	
	for(int i = 0; i < q; i++){
		if(aluno[i] == gab[i]){
			a++;
		}	
	}
	cout << a;
}