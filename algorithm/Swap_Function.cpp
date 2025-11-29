#include <iostream>
using namespace std;

// Hàm đổi chỗ 2 số nguyên (thay thế cho std::swap)
void hoandoi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a=5, b=10;
    hoandoi(a, b);
    cout << a << " " << b; // 10 5
    

    return 0;
}