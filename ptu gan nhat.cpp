#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector <int> a;
		for(int i=0; i<n; i++){
			int x; cin >>x;
			a.push_back(x);
		}
		int x,k; cin >> x >> k;
		int tmp;
		for(int i=0; i<a.size(); i++){
			if(x==a[i]){
				tmp=i;
			}
	    }
	    /*/for(int i=tmp-k/2; i<tmp; i++){
	    	cout << a[i] << endl;
		}
		for(int i=tmp+1; i<=tmp+k/2; i++){
			cout << a[i] << endl;
		}/*/
		cout << tmp << endl;
	}
}
