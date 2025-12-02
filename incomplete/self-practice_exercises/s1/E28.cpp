#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){    
    double a, b, c;
    cin >> a >> b >> c;
    double delta = pow(b, 2) - 4 * a * c;
    if (delta < 0){
        cout << "NO\n";
    }
    else if (delta == 0){
        cout << fixed << setprecision(2) << - b / (2 * a);
    }
    else{
        cout << fixed << setprecision(2) << (-b + sqrt(delta)) / (2 * a) << " " << (-b - sqrt(delta)) / (2 * a);
    }
    return 0;
}