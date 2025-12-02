#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int C;
    cin >> C;
    float F = (C * (float)9 / 5) + 32;
    cout << fixed << setprecision(2) << F << endl;
    return 0;
}