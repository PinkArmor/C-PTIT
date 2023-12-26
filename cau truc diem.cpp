#include <bits/stdc++.h>
using namespace std;
struct Point{
	double x,y;
	
};
int main(){
	Point a,b;
	int t; 
	cin >> t;
	while(t--){
		cin >> a.x >> a.y; 
		cin >> b.x >> b.y;
		double c = sqrt(pow(a.x-b.x,2) + pow(a.y-b.y,2));
		cout << fixed<< setprecision(4) << c << endl;
	}
	return 0;
}
