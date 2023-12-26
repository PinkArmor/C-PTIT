#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long mod = 1e9+7;
    int n; cin>>n;
    long long f[n+1];
    f[1]=1;
    f[2]=1;
    for(int i=3; i<=n; i++){
        f[i] = (2*f[i-1] + 3*f[i-2])%mod; 
        
    }
    cout<<f[n]%mod;
    return 0;
}


