#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to perform the simple sieve of Eratosthenes
void simpleSieve(int limit, vector<int>& prime) {
    vector<bool> isPrime(limit + 1, true);

    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p)
                isPrime[i] = false;
        }
    }

    for (int p = 2; p <= limit; ++p) {
        if (isPrime[p]) {
            prime.push_back(p);
        }
    }
}

// Function to find all primes in range [L, R]
void segmentedSieve(long long L, long long R) {
    // Compute all primes up to sqrt(R)
    int limit = sqrt(R) + 1;
    vector<int> prime;
    simpleSieve(limit, prime);

    // Create a boolean array "isPrime[0..R-L]" and initialize all entries as true.
    vector<bool> isPrime(R - L + 1, true);

    // Use the primes to mark non-prime numbers in [L, R]
    for (int i = 0; i < prime.size(); i++) {
        // Find the minimum number in the [L, R] range that is a multiple of prime[i]
        long long base = (L / prime[i]) * prime[i];
        if (base < L) base += prime[i];

        // Mark multiples of prime[i] as false
        for (long long j = base; j <= R; j += prime[i]) {
            if (j != prime[i]) { // If it is not the prime number itself
                isPrime[j - L] = false;
            }
        }
    }

    // Special case for when L is 1, as 1 is not a prime number
    if (L == 1) {
        isPrime[0] = false;
    }

    // Print all prime numbers in the range [L, R]
    for (long long i = L; i <= R; ++i) {
        if (isPrime[i - L]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    long long L = 10, R = 50;
    cout << "Primes in range [" << L << ", " << R << "] are: ";
    segmentedSieve(L, R);
    return 0;
}
