#include <bits/stdc++.h>

using namespace std;

long long gcd (long long a, long long b){
    while(b){
        long long r = a%b;
        a=b;
        b=r;
    }
    return a;
}
long long lcm(long long a, long long b){
    return (a/gcd(a,b)) *b;
}
int main()
{
   int t; cin >> t;
   while(t--){
      long long x,y,z,n; cin >>x >> y >> z >> n;
      long long a = pow(10,n-1);
      long long b = pow(10,n)-1;
      long long c = lcm(lcm(x,y),z);
      long long num;
      if(c>b){
          cout << "-1\n";
      }
      else if(a%c==0){
          cout << a << endl;
      }
      else {
          num = a/c;
          cout << c*(num+1) <<endl;
      }
   }

    return 0;
}

