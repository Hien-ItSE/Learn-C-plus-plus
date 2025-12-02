#include <iostream>

using namespace std;

int main(){
    char c;
    cin >> c;
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}