#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    long long n;
    cin >> n;
    double S = 1 - 1.00 / (n + 1);
    cout << fixed << setprecision(2) << S << endl;
    return 0;
}