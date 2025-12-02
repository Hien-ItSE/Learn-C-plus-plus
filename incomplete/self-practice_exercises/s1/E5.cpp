#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int r;
    cin >> r;
    double C = 2 * 3.14 * r, S = 3.14 * r * r;
    cout << fixed << setprecision(2) << C << " " << S << endl;
    return 0;
}