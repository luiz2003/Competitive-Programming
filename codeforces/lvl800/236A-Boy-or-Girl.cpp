//problem link: https://codeforces.com/problemset/problem/236/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	string usrname;

	cin >> usrname;

	sort(usrname.begin(),usrname.end());
	int c = 1;

	for (int i = 0; i < usrname.length(); ++i){
		if (i>0 and usrname[i]!=usrname[i-1])
		{
			c++;
		}
	}
	(c%2==0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";

}