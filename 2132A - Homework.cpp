#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
	int n; cin >> n;
	string a; cin >> a;
	int m; cin >> m;
	string b, c; cin >> b >> c;
	string vlad = "", dima = "";
	for(int i=0;i<m;i++){
	  if(c[i] == 'V'){
	    vlad.push_back(b[i]);
	  }else{
	    dima.push_back(b[i]);
	  }
	}
	reverse(vlad.begin(), vlad.end());
	cout << vlad << a << dima << endl;
}

signed main(){
	int Q; cin >> Q;
	while(Q--) solve();
}
