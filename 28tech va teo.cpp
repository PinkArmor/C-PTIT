#include <bits/stdc++.h>
using namespace std;
bool check(char c){
	return c == '2' || c == '8' || c=='t' || c=='e'|| c=='c' || c=='h'; 
}
int main(){
	string s; cin >> s;
	string res = "";
	for(char i:s){
		if(!check(i)){
			res += i;
		}
	}
	if(res==""){
		cout << "empty\n";
	}
	else cout << res;
}
