// Part 1: Preprocessor declarations (khai báo tiền xử lý)
#include <math.h>
#include <iostream>

// Part 2: Global declarations (khai báo toàn cục - dùng chung)
// These can be data types, constants, variables, functions, etc.
using namespace std;  // use the libraries/namespace
// Function prototypes / declarations

// 1. Hàm nhập 1 số nguyên tố từ bàn phím
void enter_Prime_num(int& n);

// 2. Hàm kiểm tra xem 1 số nguyên có phải là số nguyên tố hay không
bool check_Prime_num(int n);

// 3. Hàm tìm số nguyên tố gần với n nhất
int find_the_nearest_Prime_num(int n);

// 4. Làm tròn số
long long lamtronso(float x);

// 5. Tìm UCLN của 2 số nguyên
int uscln(int a, int b);

// 6. Tìm BCNN của 2 số nguyên
int bscnn(int a, int b);

// 7. In tất cả các ước số chung của 2 số nguyên ko âm cho trước
void in_cac_UC(int a, int b);

// Hàm 1: Nhập và validate k
int nhap_k();

// Hàm 2: Tìm và in số chính phương lớn nhất có k chữ số
void tim_so_chinh_phuong(int k);

// int temp = pow(10, k) - 1   (int)sqrt(temp)  ^2
// pow(10, k - 1)

// Part 3: the main() function (thân chương trình chính)
int main() {
    // Local declarations go here (khai báo cục bộ)
    int n, kq;
    enter_Prime_num(n);
    kq = find_the_nearest_Prime_num(n);
    cout << "So can tim la: " << kq << endl;

    return 0;
}

void enter_Prime_num(int& n) {
    do {
        cout << "enter_Prime_num 1 so nguyen to:";
        cin >> n;
    } while (!check_Prime_num(n));
}

int find_the_nearest_Prime_num(int n) {
    if (n == 2) return 3;
    int t = n - 1, s = n + 1;
    while (!check_Prime_num(t)) t--;
    while (!check_Prime_num(s)) s++;
    if (n - t <= s - n)
        return t;
    else
        return s;
}

bool check_Prime_num(int n) {
    if (n < 2) return false;
    double c = sqrt(n);
    for (int i = 2; i <= c; i++)
        if (n % i == 0) return false;
    return true;
}

long long lamtronso(float x) {
    long long kq, nguyen;
    float thapphan, tuyetdoi;
    tuyetdoi = fabs(x);
    nguyen = (long long)(tuyetdoi);
    thapphan = tuyetdoi - nguyen;
    if (thapphan < 0.5) {
        if (x >= 0)
            kq = nguyen;
        else
            kq = -nguyen;
    } else {
        if (x >= 0)
            kq = nguyen + 1;
        else
            kq = -nguyen - 1;
    }
    return kq;
}

int uscln(int a, int b) {
    while (b != 0) {
        int save = a % b;
        a = b;
        b = save;
    }
}

int bscnn(int a, int b) {
    return a / uscln(a, b) * b;
}

void in_cac_UC(int a, int b) {
	int min;
    if (a == 0) min = b;
    else if (b == 0) min = a;
    else min = (a < b) ? a : b;
    for (int i = 1; i <= min; i++)
        if (a % i == 0 && b % i == 0)
            cout << i << "  ";
}

int nhap_k() {
    int k;
    
    do {
        cout << "Nhap so chu so k (1-9): ";
        cin >> k;
        
        if (cin.fail()) {
            // Xử lý trường hợp nhập không phải số
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Vui long nhap so nguyen!\n";
            k = 0; // Để tiếp tục vòng lặp
        } else if (k < 1 || k > 9) {
            cout << "k phai nam trong khoang 1-9!\n";
        }
    } while (k < 1 || k > 9);
    
    return k;
}

void tim_so_chinh_phuong(int k) {
    // Tính số lớn nhất có k chữ số
    // VD: k=3 => max = 999
    long long max_num = pow(10, k) - 1;
    
    // Tìm căn bậc hai của số lớn nhất
    long long sqrt_max = sqrt(max_num);
    
    // Số chính phương lớn nhất = sqrt_max^2
    long long result = sqrt_max * sqrt_max;
    
    cout << "\nSo chinh phuong lon nhat co " << k << " chu so la: " 
         << result << "\n";
    cout << "(" << sqrt_max << "^2 = " << result << ")\n";
}