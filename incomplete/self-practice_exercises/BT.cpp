#include <iostream>

using namespace std;

void bai1_in_so_le() {
    cout << "In so le (bo qua so chan)" << endl;
    int i = 1;
    while (i <= 10){
        if (i % 2 == 0){
            ++i;
            continue;
        }
        cout << i << endl;
        ++i;
    }
}

void bai2_menu() {
    int choice;
    do {
        cout << "Menu:" << endl;
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
}

void bai3_dung_khi_nhap_so_am() {
    cout << "Dung chuong trinh khi nhap <= 0 (Do-While)" << endl;
    int n;
    do {
        cout << "Nhap so duong: ";
        cin >> n;   
    }
    while (n > 0);
    cout << "Dung chuong trinh!" << endl;
}

void bai4_dung_khi_nhap_so_am() {
    cout << "Dung chuong trinh khi nhap <= 0 (While True)" << endl;
    while (true) {
        int n;
        cout << "Nhap so duong: ";
        cin >> n;
        if (n <= 0) {
            cout << "Dung chuong trinh!" << endl;
            break; 
        }
    }
}

void bai5_bang_cuu_chuong() {
    cout << "Bang cuu chuong" << endl;
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            cout << i << " * " << j << " = " << i * j << "\t";
        }
        cout << endl;       
    }
}

void bai6_tam_giac_sao() {
    cout << "Ve tam giac sao" << endl;
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void bai7_tinh_giai_thua() {
    long long n, factorial; // Su dung long long de chua ket qua lon
    cout << "Tinh giai thua cua: ";
    cin >> n;
    factorial = n;
    for (int i = n - 1; i >= 1; --i) {
        factorial *= i;
    }
    cout << "Giai thua cua " << n << " = " << factorial << endl;
}

void bai8_day_fibonacci() {
    cout << "In n so dau cua day Fibonacci" << endl;
    int n, F1 = 0, F2 = 1;
    cout << "n = ";
    cin >> n;
    if (n == 1) {
        cout << F1 << endl;
    }
    else if (n == 2) {
        cout << F1 << endl;
        cout << F2 << endl;
    }
    else if (n >=3) {
        cout << F1 << endl;
        cout << F2 << endl;
        for (int i = 1; i <= n-2; ++i ){
            int F3 = F1 + F2;
            cout << F3 << endl;
            F1 = F2, F2 = F3;
        }
    }
}

void bai9_kiem_tra_nguyen_to() {
    int n, check = 0;
    cout << "Nhap so can kiem tra: "; cin >> n; 
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0){
            check += 1;
        }
    }
    if (check == 2) {
        cout << "Day la so nguyen to!" << endl;
    }
    else {
        cout << "Day khong phai la so nguyen to!" << endl;
    }
}

void bai10_in_so_nguyen_to() {
    cout << "In cac so nguyen to tu 1-1000" << endl;
    for (int num = 1; num <= 1000; ++num) {
        bool isPrime = true;
        if (num < 2) isPrime = false;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " ";
        }
    } 
    cout << endl;
}

void bai11_so_hoan_hao() {
    cout << "Kiem tra so hoan hao" << endl;
    int n, i = 1, sum = 0;
    cout << "Nhap so can kiem tra : "; cin >> n;
    while (i <= n / 2) {
        if (n % i == 0) {
            sum += i;
        }
        ++i;
    }
    cout << n;
    cout << (n == sum ? " la so hoan hao" : " khong phai la so hoan hao") << endl;
}

int main() {
    int choice;
    do {
        cout << "TONG HOP BAI TAP" << endl;
        cout << "1. In so le 1-10 (continue)" << endl;
        cout << "2. Menu (do-while)" << endl;
        cout << "3. Dung khi nhap so am (do-while)" << endl;
        cout << "4. Dung khi nhap so am (while-true)" << endl;
        cout << "5. In bang cuu chuong" << endl;
        cout << "6. Ve tam giac sao" << endl;
        cout << "7. Tinh giai thua" << endl;
        cout << "8. Day Fibonacci" << endl;
        cout << "9. Kiem tra so nguyen to" << endl;
        cout << "10. In so nguyen to 1-1000" << endl;
        cout << "11. Kiem tra so hoan hao" << endl;
        cout << "0. Thoat chuong trinh" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1: bai1_in_so_le(); break;
            case 2: bai2_menu(); break;
            case 3: bai3_dung_khi_nhap_so_am(); break;
            case 4: bai4_dung_khi_nhap_so_am(); break;
            case 5: bai5_bang_cuu_chuong(); break;
            case 6: bai6_tam_giac_sao(); break;
            case 7: bai7_tinh_giai_thua(); break;
            case 8: bai8_day_fibonacci(); break;
            case 9: bai9_kiem_tra_nguyen_to(); break;
            case 10: bai10_in_so_nguyen_to(); break;
            case 11: bai11_so_hoan_hao(); break;
            case 0: cout << "Tam biet!"; break;
            default: cout << "Lua chon khong hop le!" << endl;
        }
    } while (choice != 0);
    return 0;
}