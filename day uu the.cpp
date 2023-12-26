#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore(1);
	while(t--){
		string s; getline(cin,s);
		stringstream ss(s);
		string tmp;
		vector<string> v;
		int cnt=0;
		int c=0,  l=0;
		while(ss >> tmp){
			++cnt;
			v.push_back(tmp);
		}
		int n = v.size();
		for(int i=0; i<n; i++){
		    int m = stoi(v[i]);
		    if(m%2==0) ++c;
		    if(m%2!=0) ++l;
		}
		if((n%2==0 && c>l) || (n%2!=0 && l>c)){
		    cout << "YES\n";
		}
		else {
		    cout << "NO\n";
		}
	}
}
