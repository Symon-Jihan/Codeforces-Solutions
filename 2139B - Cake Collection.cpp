#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
  int n, m; cin >> n >> m;
  vector<int> v(n);
  for(int &i : v){
    cin >> i;
  }
  int mxCakes = 0;
  sort(v.begin(), v.end());
  int i;
  if(m >= n) i = 0;
  else i = n - m;
  for(;i<n;i++){
    v[i] *= m - (n - i - 1);
    mxCakes += v[i];
  }
  cout << mxCakes << "\n";
}

signed main(){
  int Q; cin >> Q;
  while(Q--) solve();
}