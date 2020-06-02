#include<iostream>
#include<algorithm>
#include <vector>
#define MAX 100000
using namespace std;
vector<pair<int, string > > v;

int main(void){

	string name[MAX];
	int age[MAX];
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>v[i].first>>v[i].second;
	}
	
	stable_sort(v.begin(), v.end());

	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	return 0;
}
