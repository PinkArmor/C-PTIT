#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		multiset<int> se;
		for(int i=0; i<n; i++){
			int x; cin >> x;
			se.insert(x);
		}
		int a = se.size();
		auto it1 = se.rend();
		auto it2 = se.end();
		if(n%2==0){
			for(int i=0; i<a/2; i++){
			it1--;
			it2--;
			cout << *it2 << " "<< *it1 << " ";
		}
		}
		 if(n%2 !=0){
			for(int i=0; i<=a/2; i++){
			it1--;
			it2--;
			if(*it2 != *it1){
				cout << *it2 << " " << *it1 << " ";
			}
			else {
				cout << *it2 ;
				break;
			}
		}
		}
		cout << endl;
	}
}
