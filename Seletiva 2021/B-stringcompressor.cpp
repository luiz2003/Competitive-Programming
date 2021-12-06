#include <iostream>
#include <string>

using namespace std;

int main(){
	string word;
	cin >> word;
	int length = word.length();

	if (length > 10){
		cout << word[0] << length-2 << word[length-1];
	}
	else{
		cout << word;
	}
}