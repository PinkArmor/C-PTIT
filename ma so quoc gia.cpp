#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >>t;
	while(t--){
		 string s;
    cin >> s;
    string t = "084";
    for(int i=0; i<s.size(); i++){
        if(s[i] =='0' && s[i+1]=='8' && s[i+2]=='4'){
            s[i] = s[i+1] = s[i+2] = '\0'; //xoa so trong xau
            break; // xoa so trong xau
        }
    }
    for(int i=0; i<s.size(); i++){
        if(s[i] != '\0'){
            cout << s[i];
        }
    }
		cout << endl;
	}
}
