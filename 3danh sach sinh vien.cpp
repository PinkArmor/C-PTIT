#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten, lop, date;
	float gpa;
};
void nhap(SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		cin.ignore();
		getline(cin,ds[i].ten);
		cin >> ds[i].lop >> ds[i].date;
		cin >> ds[i].gpa;
	}
}
void thuong(string &s){
	for(int i=0; i<s.size(); i++){
		s[i] = tolower(s[i]);
	}
}
bool cmp(SinhVien a, SinhVien b){
	return a.gpa>b.gpa;
}
void sapxep(SinhVien ds[], int n){
     sort(ds, ds+n, cmp);
}
void in(SinhVien ds[], int n){
	for(int i=0; i<n; i++){
		int k=i+1, cnt=0;
		while(k){
			k/=10;
			++cnt;
		}
		if(cnt==1) cout <<"B20DCCN00";
		else cout << "B20DCCN0";
		cout <<i+1<< " " ;
		thuong(ds[i].ten);
		stringstream ss(ds[i].ten);
		string tmp;
		vector<string> v;
		while(ss >> tmp){
			v.push_back(tmp);
		} 
		for(int i=0; i<v.size(); i++){
			v[i][0] = toupper(v[i][0]);
		}
		for(int i=0; i<v.size(); i++){
			cout << v[i] << " ";
		}
		cout <<ds[i].lop<<" ";
		if(ds[i].date[1]=='/') ds[i].date.insert(0,1,'0');
		if(ds[i].date[4]=='/') ds[i].date.insert(3,1,'0');
		cout << ds[i].date <<" ";
		cout << fixed << setprecision(2) << ds[i].gpa << endl;  
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
