#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a <= 0 || b <= 0 || c <= 0){
        cout << "INVALID";
    }
    else if (a + b > c && a + c > b && b + c > a){
        if (a == b && b == c && a == c){
            cout << "1" << endl;
        }
        else if (a == b || a == c || b == c){
            cout << "2" << endl;
        }
        else if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(a, 2) + pow(b, 2)){
            cout << "3" << endl;
        }
        else{
            cout << "4" << endl;
        }
    }
    else{
        cout << "INVALID";
    }
    return 0;
}