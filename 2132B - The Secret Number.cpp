#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  //n = x + (x * 10^k) = x * (1 + 10^k)
  //x = n / (1 + 10^k)
	ll n, base = 10; cin >> n;
	vector<ll> res;
	for(ll i=1;i<19;i++){
	  ll divisor = base + 1;
	  if(n % divisor == 0){
	    ll x = n / divisor;
	    res.push_back(x);
	  }
	  base = base * 10;
	}
	sort(res.begin(), res.end());
	if(res.size() < 1){
	  cout << 0 << '\n';
	  return;
	}
	cout << res.size() << '\n';
	for(ll i=0;i<res.size();i++){
	  cout << res[i] << ' ';
	}
	cout << '\n';
}

signed main(){
	int Q; cin >> Q;
	while(Q--) solve();
}
