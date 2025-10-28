#include <bits/stdc++.h>
using namespace std;

int multiples(int n, int x) {
  int count = 0;
  for (int a = 1; a <= n; a++) {
    if (x % a == 0) { // a is a divisor of x
      int b = x / a;
      if (b >= 1 && b <= n) { // b must be in the range
      count++;
      }
    }
  }
  return count;
}

int main() {
    int n;
    cout << "Enter max number: ";
    cin >> n;
    int x;
    cout << "Enter multiples: ";
    cin >> x;
    int ans=multiples(n,x);
    cout<<x<<" has "<<ans<<" multiples until "<<n;
}
