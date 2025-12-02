#include <iostream>

using namespace std;

int main(){
    int t, n;
    cin >> t >> n;
    if (n <= 0){
        cout << "INVALID";
    }
    else{
        switch(t){
        case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
            cout << "31\n";
            break;
        case 4 : case 6 : case 9 : case 11:
            cout << "30\n";
            break;
        case 2:
            if ((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0))){
            cout << "29\n";
            }
            else{
                cout << "28\n";
            }
            break;
        default:
            cout << "INVALID";
        }
    }
    return 0;
}


