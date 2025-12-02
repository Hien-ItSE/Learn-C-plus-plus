#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    cout << (((n % 3 == 0) && (n % 5 == 0)) ? "1" : "0");
    return 0;
}