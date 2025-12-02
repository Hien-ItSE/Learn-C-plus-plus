#include <iostream>
#include <cmath>

int main(){
    int x;
    std::cin >> x;
    long long A = pow(x, 3) + 3 * pow(x, 2) + x + 1;
    std::cout << A << std::endl;
    return 0;
}