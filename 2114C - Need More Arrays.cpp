#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n; cin >> n;
  vector<int> v(n);
  for(int &i : v) cin >> i;
  int count = 1;
  int slow = v.front(), fast = 1;
  for(;fast<n;fast++){
    if(v[fast] - slow > 1){
      count++;
      slow = v[fast];
    }
  }
  cout << count << '\n';
}

signed main(){
  int Q; cin >> Q;
  while(Q--) solve();
}