#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double d = pow((pow(x2 - x1, 2) + pow(y2 - y1, 2)), (float)1 / 2);
    cout << fixed << setprecision(2) << d << endl;
    return 0;
}