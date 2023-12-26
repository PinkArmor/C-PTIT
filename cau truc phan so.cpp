#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
	while(b){
		long long r = a%b;
		a=b;
		b=r;
	}
	return a;
}
struct PhanSo{
	long long x,y;
};
void nhap(PhanSo &a){
	cin >> a.x >> a.y; 
}
void rutgon(PhanSo &a){
	long long b = gcd(a.x,a.y);
	a.x /= b;
	a.y /= b;
}
void in(PhanSo &a){
	 cout << a.x << "/" << a.y;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
