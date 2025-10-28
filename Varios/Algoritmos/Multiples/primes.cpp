#include <bits/stdc++.h>
using namespace std;

// Function to return vector of primes ≤ x
vector<int> primes_up_to(int x) {
    vector<char> is_prime(x + 1, true);
    vector<int> primes;

    if (x < 2) return primes; // No primes less than 2

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= x; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= x; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    vector<int> primes = primes_up_to(x);
    for (int p : primes) {
        cout << p << " ";
    }
    cout << endl;
    return 0;
}