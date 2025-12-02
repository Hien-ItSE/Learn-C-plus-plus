#include <iostream>

using namespace std;

int main(){
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double TB = (a + b + c * 2 + d * 3) / 7;
    if (TB >= 8){
        cout << "GIOI";
    }
    else if (TB >= 6.5 && TB < 8){
        cout << "KHA";
    }
    else if (TB >= 5 && TB < 6.5){
        cout << "TRUNG BINH";
    }
    else if (TB < 5){
        cout << "YEU";
    }
    return 0;
}