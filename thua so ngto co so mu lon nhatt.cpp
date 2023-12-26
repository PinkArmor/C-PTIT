#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n; cin>>n;
    map<long long,long long> mp;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            while(n%i==0){
                mp[i]++;
                n/=i;
            }
        }
    }
    if(n>1) mp[n]++;
    long long MAX=-1e9, max_key=-1e9;
    for(auto it:mp){
        if(it.second>MAX || (it.second==MAX && it.first<max_key) ){
            MAX=it.second;
            max_key=it.first;
        }
    }
    cout<<max_key<<" "<<MAX;
    return 0;
}

