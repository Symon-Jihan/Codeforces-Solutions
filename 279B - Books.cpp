#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n, t; cin >> n >> t;
  vector<int> v(n);
  for(int &i : v) cin >> i;
  int left = 0, right = -1, sum = 0;
  static int count = 0;
  for(;left<n;left++){
    while(right + 1 < n && sum + v[right + 1] <= t){
      sum += v[right + 1];
      right++;
    }
    count = max(count, right - left + 1);
    sum -= v[left];
  }
  cout << count << '\n';
}

signed main(){
  solve();
}