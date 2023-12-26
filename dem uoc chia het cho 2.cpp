#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v;
		int cnt=0;
		for(int i=1; i<=sqrt(n); i++){
			if(n%i==0){
				v.push_back(i);
				if(i != n/i){
					v.push_back(n/i);
				}
			}
		}
		for(int x=0; x<v.size(); x++){
			if(v[x] % 2 ==0) ++cnt;
		}
		cout << cnt << endl;
	}
}
