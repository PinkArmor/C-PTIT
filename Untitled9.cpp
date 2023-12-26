#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a, const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	return *x-*y;
}
int main(){
	int n; cin >> n;
	int a[n][n] , b[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n ; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n ; j++){
			b[i][j] = a[j][i];
		}
	}
	for(int i=0; i<n ; i++){
		qsort(b[i],n, sizeof(int) , cmp);
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << b[j][i] << " ";
		}
		cout << endl;
	}
}

