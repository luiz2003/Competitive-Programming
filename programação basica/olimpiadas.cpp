#include <iostream>
#include <algorithm>

using namespace std;

struct country{
	int gold, silver, bronze, id;
};

int medalCompare(country a, country b){
	if (a.gold != b.gold){
		return a.gold > b.gold;
	}
	if(a.silver != b.silver){
		return a.silver > b.silver;
	}
	if(a.bronze != b.bronze){
		return a.bronze > b.bronze;
	}
	return a.id < b.id;
}
int main(){

	int n,m;
	int g, s, b;

	cin >> n >> m;

	country v[n];

	for (int i = 0; i < n; ++i)
	{
		v[i].gold = 0;
		v[i].silver = 0;
		v[i].bronze = 0;
		v[i].id = i+1;
	}

	for (size_t i = 0; i < m; i++)
	{
		cin >> g >> s >> b;
		v[g-1].gold++;
		v[s-1].silver++;
		v[b-1].bronze++;
	}
	
	sort(v, v+n, medalCompare);

	for (int i = 0; i < n; i++)
	{
		cout << v[i].id << " " ;
	}
	

}