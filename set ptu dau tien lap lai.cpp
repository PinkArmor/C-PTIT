#include <bits/stdc++.h>
using namespace std;
int check(int a[], int n){
	set<int> se; 
	for(int i=0; i<n; i++){
		if(se.find(a[i]) != se.end()){
			return a[i];
		}
		se.insert(a[i]);
	}
	return -1;
}
int check1(int a[], int n){
	map<int,int> mp;
	for(int i=0; i<n; i++){
		mp[a[i]]++;
		if(mp[a[i]]>1){
			return a[i];
		}
	}
	return -1;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n; 
		int a[n];
		for(int &x:a) cin >> x;
		int num = check1(a,n);
		cout << num << endl;
	}
}
