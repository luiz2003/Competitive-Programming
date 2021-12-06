#include <iostream>
#include <ctype.h>

using namespace std;

string title(string F){
	char c;
	for(int i = 0; i < F.length(); i++){
		if(i==0){
			c = F[0];
			if(islower(c)){
				F[0] -= 32;
			}
		}
		else{
			c = F[i];
			if(F[i-1] == ' ' and F[i] != ' '){
				if(islower(c)){
					F[i] -= 32;
				}
			}
			else if(!islower(c) and F[i] != ' '){
				F[i] += 32;
			}
		}	
	}
	
	return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}