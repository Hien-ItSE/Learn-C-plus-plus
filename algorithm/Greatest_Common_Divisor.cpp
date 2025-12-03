#include <iostream>
using namespace std;
#define ll long long

ll greatest_common_divisor(ll a, ll b) {
    if ((a && b) == 0) return -1;
    else {
        while (b != 0) {
            ll r = a % b;
            a = b;
            b = r;
        }
        return a;
    }
}
ll greatest_common_divisor2(ll a, ll b) {
    if (a == 0 && b != 0) return b;
    else if (a != 0 && b == 0) return a;
    else if (a != 0 && b != 0) {
        if (a < b) {
            for (ll i = a; i >= 1; i--) {
                if (a % i == 0 && b % i == 0) return i;
            }
        }
        else {
            for (ll i = b; i >= 1; i--) {
                if (a % i == 0 && b % i == 0) return i;
            }
        }
    }
    return -1;
}

int main() {
    ll a, b;
    cin >> a >> b;
    cout << greatest_common_divisor(a, b) << endl;
    cout << greatest_common_divisor2(a, b) << endl;
    return 0;
}