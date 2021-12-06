#include <iostream>

using namespace std;

string title(string F){
	int len = F.length();
	for (int i = 0; i < len; ++i) // maiusc -> minusculo : +32
	{
		if(i == 0){
			if('a'<=F[i] and F[i]<='z'){
				F[i] = F[i]-32;	
			}
		}
		else{
			if(F[i-1] == ' '){
				if('a'<=F[i] and F[i]<='z'){
					F[i] = F[i]-32;
				}
			}
			else if('A'<=F[i] and F[i]<='Z'){
				F[i] = F[i]+32;
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