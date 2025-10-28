#include <bits/stdc++.h>
using namespace std;

int sum(int n, int a, int x) {
  int p=(n*(a+x))/2;
  return p;
}

int main() {
    int n;
    cout << "Enter amount of numbers: ";
    cin >> n;
    int a;
    cout << "Enter first number: ";
    cin >> a;
    int x;
    cout << "Enter last number: ";
    cin >> x;
    int ans=sum(n,a,x);
    cout<<"The sum is "<<ans;
}
