#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll n; cin >> n;
  vector<ll> v(n);
  vector<ll> even, odd;
  ll k = 1;
  for (ll &i : v) {
      cin >> i;
      if (k & 1) {
          odd.push_back(i);
      } else {
          even.push_back(i);
      }
      k++;
  }
  ll gcdEvenIdx = 0;
  ll gcdOddIdx = 0;
  for (ll i = 0; i < even.size(); i++) {
      gcdEvenIdx = __gcd(gcdEvenIdx, even[i]);
  }
  for (ll i = 0; i < odd.size(); i++) {
      gcdOddIdx = __gcd(gcdOddIdx, odd[i]);
  }
  bool gcdEvenIdxWorks = true;
  for (ll i = 0; i < odd.size(); i++) {
      if (odd[i] % gcdEvenIdx == 0) {
          gcdEvenIdxWorks = false;
          break;
      } 
  }
  if (gcdEvenIdxWorks) {
    cout << gcdEvenIdx << '\n';
    return;
  }
  bool gcdOddIdxWorks = true;
  for (ll i = 0; i < even.size(); i++) {
      if (even[i] % gcdOddIdx == 0) {
          gcdOddIdxWorks = false;
          break;
      } 
  }
  if (gcdOddIdxWorks) {
      cout << gcdOddIdx << '\n';
      return;
  }
  cout << 0 << '\n';
}

signed main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int Q; cin >> Q;
  while (Q--) solve();
}
