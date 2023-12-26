#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int n; cin >> n;
	double a[n];
	vector<double> v;
	double sum=0.0;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	double b=*max_element(a,a+n), c= *min_element(a,a+n);
	for(int i=0; i<n; i++){
		if(a[i]!=b && a[i] !=c){
			v.push_back(a[i]);
		}
	}
	int cnt=0;
	for(int i=0; i<v.size(); i++){
		sum += v[i];
		++cnt;
	}
	double s= 1.0*sum/cnt;
	cout << fixed << setprecision(2) << s << endl;
}
