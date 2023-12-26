#include <bits/stdc++.h>
using namespace std;
// |ai-aj| <=t => aj-t <= ai <= t+aj
bool check(int n, int k ,int t, int a[]){
	 set<int> s;
	 for(int j=0; j<k; j++){
	 	//kiem tra trong se co phtu a[i] >= a[j]-t
		auto it = s.lower_bound(a[j]-t);
		if(it != s.end() && *it<=a[j]+t){
			return true;
		}
		s.insert(a[j]);
	 }
	 for(int j=k; j<n; j++){
	 	s.erase(s.find(a[j-k])); //xoa bang iterator
	 	auto it = s.lower_bound(a[j]-t);
		if(it != s.end() && *it<=a[j]+t){
			return true;
		}
		s.insert(a[j]);
	 }
}    

int main(){
	int n,k,t; cin >> n >> k >> t;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	if(check(n,k,t,a)) cout << "YES\n";
	else cout << "NO\n";
}
