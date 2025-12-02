#include <iostream>

using namespace std;

int main(){
    char c;
    cin >> c;
    if (c >= '0' && c <= '9'){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}