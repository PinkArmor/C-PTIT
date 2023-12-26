#include <bits/stdc++.h>
using namespace std;
void thuong(string &s){
	for(int i=0; i<s.size(); i++){
		s[i] = tolower(s[i]);
	}
}
int main(){
	int t; cin >> t;
	cin.ignore(1);
	while(t--){
		int m; cin >> m;
		cin.ignore(1);
		string s; getline(cin,s);
		thuong(s);
		vector<string> v;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		int n = v.size();
			if(m==1){
			for(int i=n-1; i<n; i++){
		    	v[i][0] = toupper(v[i][0]);
			}
			cout << v[n-1] << " ";
			for(int i=0; i<n-1; i++){
				v[i][0] = toupper(v[i][0]);
			}
			for(int i=0; i<n-1; i++){
				cout << v[i] << " ";
			}
		}
	    if(m==2){
			for(int i=1; i<2; i++){
				v[i][0] = toupper(v[i][0]);
			}
			cout << v[1] <<" ";
			for(int i=2; i<n; i++){
				v[i][0] = toupper(v[i][0]);
			}
			for(int i=2; i<n; i++){
				cout << v[i] << " ";
			}
			for(int i=0; i<1; i++){
				v[i][0] = toupper(v[i][0]);
			}
			cout << v[0];
		}
		cout << endl;
	}
}
