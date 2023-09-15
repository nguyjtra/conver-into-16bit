#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
void k(ll n) {

    if (n / 16 == 0) {
        if (n < 10) cout << n % 16;
        else cout << (char)(65 + n % 16 - 10);
    }

    else {
        k(n / 16);

        if (n % 16 >= 10 && n % 16 <= 15) cout << (char)(65 + n % 16 - 10);

        else cout << n % 16;
    }
}

int main() {
    ll n; cin >> n;
    k(n);
    return 0;
}