#include <iostream>
using namespace std;

// Ceiling Division

int recipe(int a, int b) {
    return (a + b - 1) / b;  // (a >= 0, b > 0)
}

int divCeil(int a, int b) {
    if (b < 0) { b = -b; a = -a; }
    int result = a / b;
    if (a % b > 0) {    // b > 0, nếu a % b > 0 thì a > 0  =>  a / b > 0
        result++;
    }
    return result;
}

int socuthe(double n) {
    int kq = n;
    if (n > 0) {
        kq++;
        return kq;
    }
    else return kq;
}

// Floor Division

int divFloor(int a, int b) {
    if (b < 0) { b = -b; a = -a; }
    int result = a / b;
    if (a % b < 0) {
        result--;
    }
    return result;
}

int divFloor(int a, int b) {
    int res = a / b;
    if (((a < 0) ^ (b < 0)) && (a % b != 0)) {    // (a ^ b) < 0
        res--;
    }
    return res;
}


int main() {
    int a, b;
    cin >> a >> b;
    
    return 0;
}