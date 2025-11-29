#include <iostream>

using namespace std;

/*
    for (statement 1; statement 2; statement 3) {
        // code block to be executed
    }
*/

/*  The foreach Loop
    for (type variableName : arrayName) {
        // code block to be executed
    }
*/

//break
//continue

/*
    int i, a;
    for (i = 0, a = 10; i <= 1000; i++) {
        if (i < 1000) {
            cout << i << endl;
        }
        continue;
        if (a > 20) {
            break;
        }
        ++a;
    }
*/

/*
    int n = 10,i , S = 0;
    for (S, i = 0; i <= n; ++i) {
        S += i;
    }
    cout << S;
}
*/

/*
    int n;
    while (false) {
    cout << "Nhap so duong: ";
    cin >> n;
    if (n > 0) break;
    cout << "Nhap lai!\n";
    }
*/

// dem so luong chu so cua n (n != 0)
/*
    int n, cnt = 0;
    cin >> n;
    int a = n;
    while (n != 0) {
        ++cnt;
        n /= 10;
    }
    cout << a << " co " << cnt << " chu so";
    return 0;
}

int main(){
// Print odd numbers from 1 to 10 (skip even numbers)
/*
	int i = 1;
	while (i <= 10){
		if (i % 2 == 0){
			++i;
			continue;
		}
		cout << i << endl;
		++i;
	}
*/

/*
    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Chon 1" << endl;
        cout << "2. Chon 2" << endl;
        cout << "0. Thoat" << endl;
        cout << "Nhap lua chon: ";
        cin >> choice;
    
        if(choice == 1) {
            cout << "Ban chon 1" << endl;
        } else if(choice == 2) {
            cout << "Ban chon 2" << endl;
        }
    } while(choice != 0);
*/

// Stop when entering a negative number
/*
	int n;
	do {
		cout << "Nhap so duong: ";
		cin >> n;	
	}
	while (n > 0);
	cout << "Dung chuong trinh!";
*/