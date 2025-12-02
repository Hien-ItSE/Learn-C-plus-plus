#include <iostream>

using namespace std;

int main(){
    char c;
    cin >> c;
    if (c >= 'A' && c < 'Z'){
        cout << (c += 33);
    }
    else if (c == 'Z' || c == 'z'){
        cout << 'a';
    }
    else if (c >= 'a' && c <= 'z'){
        cout << (c += 1);
    }
    else{
        cout << "INVALID";
    }
    return 0;
}