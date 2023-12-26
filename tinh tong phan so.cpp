#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
	while(b){
		int r = a%b;
		a=b;
		b=r;
	}
	return a;
}
long long lcm(long long a, long long b){
	return a*b/gcd(a,b) ;
}
struct PhanSo{
	long long tu,mau;
};
void nhap(PhanSo &a){
	cin >> a.tu >> a.mau;
}
void rutgon(PhanSo &a){
	long long k = gcd(a.tu,a.mau);
	a.tu /= k;
	a.mau /=k;
}
PhanSo tong(PhanSo &p, PhanSo &q){
	PhanSo a; 
    rutgon(p);
    rutgon(q);
    long long k = lcm(p.mau,q.mau);
    a.mau = k;
    long long n1 = (k/q.mau)*q.tu; // k/q.mau = p.mau
    long long n2 = (k/p.mau)*p.tu;
	a.tu = n1+n2;
    rutgon(a);
    return a;
}
void in(PhanSo &a){
	 cout << a.tu << "/" << a.mau << endl;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
