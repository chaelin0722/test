#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(void){
	int n;
	int num=0;
	char s[110];
	vector<string> v[210];

	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>num;
		cin>>s;

		v[num].push_back(s);
	}

	for(int i=0;i<210;i++){
		for(int j=0; j<v[i].size();j++){
			cout << i<<" "<<v[i][j]<<endl;
		}
	}

	return 0;
}
