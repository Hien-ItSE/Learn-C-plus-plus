#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= 0 || b <= 0 || c <= 0){
        cout << "NO";
    }
    else if (a + b > c && a + c > b && b + c > a){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}