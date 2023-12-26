#include <bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string ten;
	string date;
	double p1,p2,p3;
};
void nhap(ThiSinh &a){
	getline(cin,a.ten);
	cin >> a.date >> a.p1 >> a.p2 >> a.p3;
}
void in(ThiSinh &a){
	cout << a.ten << " ";
	cout << a.date << " ";
	cout << fixed << setprecision(1) << a.p1+a.p2+a.p3 << endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
