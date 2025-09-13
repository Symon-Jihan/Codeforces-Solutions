#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin >> n;
  vector<int> v(n - 1);
  for(int &i : v) cin >> i;
  vector<int> ans;
  ans.push_back(1000);
  for(int i=1;i<n;i++){
    ans.push_back(v[i - 1] + ans[i - 1]);
  }
  for(int i : ans) cout << i << ' ';
  cout << "\n";
}

signed main(){
  int Q; cin >> Q;
  while(Q--) solve();
}