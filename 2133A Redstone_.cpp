#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin >> n;
  vector<int> v(n);
  map<int, int> m;
  for(int &i : v){
    cin >> i;
    m[i]++;
  }
  for(auto it=m.begin();it!=m.end();it++){
    if(it->second > 1){
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}

signed main(){
  int Q; cin >> Q;
  while(Q--) solve();
}