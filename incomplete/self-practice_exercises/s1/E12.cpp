#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long S1 = n / 2, S2 = (n - 1) / 2 - n;
    if (n % 2 == 0){
        cout << S1 << endl;
    }
    else{
        cout << S2 << endl;
    }
    return 0;
}