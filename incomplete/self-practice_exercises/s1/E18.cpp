#include <iostream>

using namespace std;

// a - z : 97 - 122
// A - Z : 65 - 90
// 0 - 9 : 48 - 57

int main(){
    char c ;
    cin >> c;
    cout << (int) c << endl;
    if ( c >= 'a' && c <= 'z'){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}