//problem link: https://codeforces.com/problemset/problem/112/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	string str1, str2;

	cin >> str1 >> str2;
	int i = 0;
	while (str1[i]){
    	char c;
    	c=str1[i];
    	str1[i] = tolower(c);
    	i++;
    }	
    
    i=0;
    while (str1[i]){
    	char c;
    	c=str2[i];
    	str2[i] =tolower(c);
    	i++;
    }

	if (str1<str2)
	{
		cout << "-1";
	}
	else if(str2<str1){
		cout << "1";
	}
	else{
		cout << "0";
	}
}