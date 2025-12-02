#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long S = 1ll * n * (n + 1) * (2 * n + 1)  / 6;
    cout << S << endl;
    return 0;
}