#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  ll d; cin >> d;
  ll n1, n2;
  for(ll i=(1+d);i<1e5;i++){
    bool br = true;
    for(ll j=2;j*j<=i;j++){
      if(i % j == 0){
        br = false;
		break;
      }
    }
    if(br){
      n1 = i;
      break;
    }
  }
  for(ll i=(n1+d);i<1e5;i++){
    bool br = true;
    for(ll j=2;j*j<=i;j++){
      if(i % j == 0){
        br = false;
		break;
      }
    }
    if(br){
      n2 = i;
      break;
    }
  }
  ll ans = min(n1 * n2, n1 * n1 * n1);
  cout << ans << '\n';
}

signed main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int Q; cin >> Q;
  while(Q--) solve();
}
