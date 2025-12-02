#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b;
    cin >> a >> b;
    if (a < b){
        cout << (int)(floor(b) - ceil(a) + 1);
    }
    else if (a > b){
        cout << (int)(floor(a) - ceil(a) + 1);
    }
    else{
        cout << 1;
    }
    return 0;
}