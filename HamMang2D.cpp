#include <iostream>
#include <algorithm>
using namespace std;
#define SIZE 20

// 1. HÀM NHẬP MA TRẬN
void nhapmatran(int arr[][SIZE], int d, int c) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
}

// 2. HÀM IN MA TRẬN
void inmatran(int arr[][SIZE], int d, int c) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            cout.width(5);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// 3. TÍNH TỔNG CÁC SỐ LẺ
int tongsole(int arr[][SIZE], int d, int c) {
    int Total = 0;
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] % 2 != 0) {
                Total += arr[i][j];
            }
        }
    }
    return Total;
}

// 4. TÌM MAX/MIN VÀ VỊ TRÍ
void max_va_vitri(int arr[][SIZE], int d, int c) {
    int max = arr[0][0], toadohang = 0, toadocot = 0;
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            if (max < arr[i][j]) {
                max = arr[i][j];
                toadohang = i;
                toadocot = j;
            }
        }
    }
    cout << "Max = " << max << endl;
    cout << "Toa do cua Max: [" << toadohang << "][" << toadocot << "]" << endl;
}

void min_va_vitri(int arr[][SIZE], int d, int c) {
    int min = arr[0][0], toadohang = 0, toadocot = 0;
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            if (min > arr[i][j]) {
                min = arr[i][j];
                toadohang = i;
                toadocot = j;
            }
        }
    }
    cout << "Min = " << min << endl;
    cout << "Toa do cua Min: [" << toadohang << "][" << toadocot << "]" << endl;
}

// 5. TÌM MAX CHẴN / MIN LẺ
void maxChan_vitri(int arr[][SIZE], int d, int c) {
    int max = -1e9, toadohang = -1, toadocot = -1, count = 0;
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] % 2 == 0) {
                if (count == 0 || arr[i][j] > max) {
                    max = arr[i][j];
                    toadohang = i;
                    toadocot = j;
                }
                count++;
            }
        }
    }
    if (count > 0) {
        cout << "Max chan = " << max << endl;
        cout << "Toa do cua Max chan: [" << toadohang << "][" << toadocot << "]" << endl;
    } else {
        cout << "Khong co so chan" << endl;
    }
}

void minLe_vitri(int arr[][SIZE], int d, int c) {
    int min = 1e9, toadohang = -1, toadocot = -1, count = 0;
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] % 2 != 0) {
                if (count == 0 || arr[i][j] < min) {
                    min = arr[i][j];
                    toadohang = i;
                    toadocot = j;
                }
                count++;
            }
        }
    }
    if (count > 0) {
        cout << "Min le = " << min << endl;
        cout << "Toa do cua Min le: [" << toadohang << "][" << toadocot << "]" << endl;
    } else {
        cout << "Khong co so le" << endl;
    }
}

// 6. TÍNH TỔNG DÒNG K / CỘT K
int tong_dong_thu_k(int arr[][SIZE], int c, int k) {
    int Total = 0;
    for (int i = 0; i < c; i++) {
        Total += arr[k][i];
    }
    return Total;
}

int tong_cot_thu_k(int arr[][SIZE], int d, int k) {
    int Total = 0;
    for (int i = 0; i < d; i++) {
        Total += arr[i][k];
    }
    return Total;
}

// 7. TÌM DÒNG/CỘT CÓ TỔNG LỚN NHẤT
int dong_co_tong_max(int arr[][SIZE], int d, int c) {
    int tongMax = -1e9;
    int dong = -1;
    for (int i = 0; i < d; i++) {
        int tongDong = 0;
        for (int j = 0; j < c; j++) {
            tongDong += arr[i][j];
        }
        if (tongDong > tongMax) {
            tongMax = tongDong;
            dong = i;
        }
    }
    return dong;
}

int cot_co_tong_max(int arr[][SIZE], int d, int c) {
    int tongMax = -1e9;
    int cot = -1;
    for (int i = 0; i < c; i++) {
        int tongCot = 0;
        for (int j = 0; j < d; j++) {
            tongCot += arr[j][i];
        }
        if (tongCot > tongMax) {
            tongMax = tongCot;
            cot = i;
        }
    }
    return cot;
}

// 8. SẮP XẾP DÒNG K / CỘT K
void sapXepDongK(int arr[][SIZE], int c, int k) {
    sort(arr[k], arr[k] + c);
}

void sapXepCotK(int arr[][SIZE], int d, int k) {
    for (int i = 0; i < d - 1; i++) {
        for (int j = i + 1; j < d; j++) {
            if (arr[i][k] > arr[j][k]) {
                swap(arr[i][k], arr[j][k]);
            }
        }
    }
}

// 10. CỘNG 2 MA TRẬN
void congMaTran(int mt1[][SIZE], int mt2[][SIZE], int mtTong[][SIZE], int d, int c) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            mtTong[i][j] = mt1[i][j] + mt2[i][j];
        }
    }
}

int main() {
    int arr[SIZE][SIZE], brr[SIZE][SIZE], crr[SIZE][SIZE];
    int d = 0, c = 0, k, choice;
    do {
        cout << "MENU\n";
        cout << "1. Nhap ma tran\n";
        cout << "2. In ma tran\n";
        cout << "3. Tinh tong so le\n";
        cout << "4. Tim max/min va vi tri\n";
        cout << "5. Tim max chan/min le va vi tri\n";
        cout << "6. Tinh tong dong/cot k\n";
        cout << "7. Tim dong/cot co tong lon nhat\n";
        cout << "8. Sap xep dong/cot k tang dan\n";
        cout << "10. Cong 2 ma tran\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Nhap so dong: "; cin >> d;
                cout << "Nhap so cot: "; cin >> c;
                nhapmatran(arr, d, c);
                break;
            case 2:
                cout << "Ma tran vua nhap:\n";
                inmatran(arr, d, c);
                break;
            case 3:
                cout << "Tong cac so le: " << tongsole(arr, d, c) << endl;
                break;
            case 4:
                max_va_vitri(arr, d, c);
                min_va_vitri(arr, d, c);
                break;
            case 5:
                maxChan_vitri(arr, d, c);
                minLe_vitri(arr, d, c);
                break;
            case 6:
                cout << "Nhap k: "; cin >> k;
                if(k >= 0 && k < d) cout << "Tong dong " << k << ": " << tong_dong_thu_k(arr, c, k) << endl;
                if(k >= 0 && k < c) cout << "Tong cot " << k << ": " << tong_cot_thu_k(arr, d, k) << endl;
                break;
            case 7:
                cout << "Dong co tong lon nhat: " << dong_co_tong_max(arr, d, c) << endl;
                cout << "Cot co tong lon nhat: " << cot_co_tong_max(arr, d, c) << endl;
                break;
            case 8:
                cout << "Nhap k can sap xep: "; cin >> k;
                int type;
                cout << "1. Sap xep dong, 2. Sap xep cot: "; cin >> type;
                if(type == 1 && k >= 0 && k < d) sapXepDongK(arr, c, k);
                else if(type == 2 && k >= 0 && k < c) sapXepCotK(arr, d, k);
                inmatran(arr, d, c);
                break;
            case 10:
                cout << "Nhap ma tran thu 2 de cong:\n";
                nhapmatran(brr, d, c);
                congMaTran(arr, brr, crr, d, c);
                cout << "Ket qua ma tran tong:\n";
                inmatran(crr, d, c);
                break;
            case 0:
                cout << "Ket thuc chuong trinh.";
                break;
            default:
                cout << "Lua chon khong hop le!";
        }
    } while (choice != 0);
    return 0;
}