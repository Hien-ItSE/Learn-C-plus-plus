#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long S = 1ll * (1 + n) * n / 2;
    cout << S << endl;
    return 0;
}