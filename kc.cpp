#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		double a,b,c,d; cin >> a >> b >> c >> d;
		double s =sqrt(pow((a-c),2) + pow((b-d),2));
		cout << fixed << setprecision(4) << s << endl;
	}
}
