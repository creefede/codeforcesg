#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x) {
    if (x < 2) return false; 
    int nsqrt = sqrt(x);
    vector<char> is_prime_small(nsqrt+1, true);
    vector<int> primes;

    for (int i = 2; i <= nsqrt; i++) {
        if (is_prime_small[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= nsqrt; j += i) {
                is_prime_small[j] = false;
            }
        }
    }
    for (int a : primes) {
        if (x % a == 0) return false;
    }
    return true;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (is_prime(x))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
