#include <iostream>

using namespace std;

int main(){
    char c;
    cin >> c;
    if (c >= 'A' && c < 'Z'){
        cout << char((int)c + 32);
    }
    else{
        cout << c;
    }
    return 0;
}
