#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	int a[n];
    	set <int> se;
    	bool ok = -1;
    	for(int i=0; i<n; i++){
    		cin >> a[i];
    		se.insert(a[i]);
		}
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				long long num = 1ll*a[i]*a[i] + 1ll*a[j]*a[j];
				double a = 1.0*sqrt(num);
				if(se.find(a) != se.end()){
					ok = 1;
				}
			}
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
}
