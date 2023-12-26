#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string cmp(string &s){
    string res="";
    int cnt=1;
    for(int i=0; i<s.size(); i++){
        if(i<s.size() && s[i]==s[i+1]){
            ++cnt;
        }
        else {
            res += s[i] + to_string(cnt);
            cnt=1;
        }
    }
    return res;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    string tmp = cmp(s);
    cout<<tmp;
    return 0;
}

