#include <bits/stdc++.h>
using namespace std;
struct sv{
      string ten; 
      string date;
      void nhap(){
          cin >> ten;
          cin >> date;
      }
      void in(){
          cout << ten << ' ' << date <<endl;
      }
};
bool sosanh(sv x, sv y){
     // x tre hon tra ve true , x gia hon false
     stringstream ss1(x.date) , ss2(x.date);
     string tmp;
	 vector<int> v1,v2;
     while(getline(ss1,tmp, '/')){
		 v1.push_back(stoi(tmp));
     }
     while(getline(ss2,tmp, '/')){
		 v2.push_back(stoi(tmp));
     }
     for(int i=2; i>=0; i--){
         if(v1[i] != v2[i]){
             return v1[i] > v2[i];
        } // tra ve true neu v1 > v2 , false neu v1 <=v2
     }
     return true;
}
bool cmp(sv x, sv y){
    return sosanh(x,y);
}
int main(){
    int n; cin >> n;
    cin.ignore();
    sv a[n];
    for(int i=0; i<n; i++){
		a[i].nhap();
    }
    sort(a,a+n, cmp);
    for(auto it:a){
    	it.in();
	}
}
