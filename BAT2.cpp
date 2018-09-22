#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
cin >> t;
while (t > 0){
  int n;
  cin >> n;
  int a[2*n];
  for (int i = 0; i < n; i++){
    cin >> a[i];
    a[i + n] = a[i];
  }
  vector < int > seq(2*n + 1, 2e9);
  seq[0] = -1;
  int ans = 0;
  for (int i = 0; i < 2*n; i++){
    int p = (int)(upper_bound(seq.begin(), seq.end(), a[i]) - seq.begin());
    if (a[i] > seq[q - 1]){
      seq[p] = a[i];
      ans = max(ans, p);
    }
  }
  cout << ans << endl;
  t--;
}
	// your code here

	return 0;
}