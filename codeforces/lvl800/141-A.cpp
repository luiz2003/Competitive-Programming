//problem link https://codeforces.com/problemset/problem/141/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	  freopen("input.txt", "r", stdin);
	  freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(0);

	string name;
	getline(cin,name);
	
	string home;
	getline(cin,home);

	string mess;
	getline(cin,mess);

	for(int i = 0; i < mess.length(); ++i){
		for ( int j = 0; j < home.length(); j++){
			if (mess[i] == home[j])
			{
				mess.erase(i,1);
				i--;
				home.erase(j,1);
				break;
			}
		}
	}
	for (int i = 0; i < mess.length(); i++)
	{
		for(int j = 0; j < name.length(); ++j){
			if (mess[i]==name[j])
			{
				mess.erase(i,1);
				i--;
				name.erase(j,1);
				break;
			}
			
		}
	}
	
	
	if (mess.length()==0 and home.length()==0 and name.length() ==0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	
	return 0;
}