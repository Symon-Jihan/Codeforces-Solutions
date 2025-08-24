#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n, k; cin >> n >> k;
  int mn = INT_MAX, mx = INT_MIN;
  int *a = new int[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
    mn = min(mn, a[i]);
    mx = max(mx, a[i]);
  }
  set<int> s;
  int minusOne = 0;
  for(int i=0;i<n;i++){
    int x; cin >> x;
    if(x != -1){
      s.insert(a[i] + x);
    }else{
      minusOne++;
    }
  }
  delete[] a;
  if(s.size() > 1){
    cout << 0 << '\n';
    return;
  }
  if(minusOne == n){
    cout << k + mn - mx + 1 << '\n';
    return;
  }
  if(*s.begin() < mx || *s.begin() > (mn + k)){
    cout << 0 << '\n';
    return;
  }
  cout << 1 << '\n';
}

signed main(){
  int Q; cin >> Q;
  while(Q--) solve();
}