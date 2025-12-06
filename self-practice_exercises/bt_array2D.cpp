#include <iostream>
#include <algorithm> // Thư viện dùng cho hàm sort (sắp xếp) và swap (đổi chỗ)
using namespace std;

// Định nghĩa kích thước tối đa cho mảng
// C++ yêu cầu khi khai báo mảng 2 chiều phải biết trước số cột tối đa
#define SIZE 20 

// 1. HÀM NHẬP MA TRẬN
void nhapmatran(int arr[][SIZE], int d, int c) {
    // Duyệt qua từng dòng (i)
    for (int i = 0; i < d; i++) {
        // Duyệt qua từng cột (j) trong dòng đó
        for (int j = 0; j < c; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j]; // Nhập giá trị vào ô [i][j]
        }
    }
}

// 2. HÀM IN MA TRẬN
void inmatran(int arr[][SIZE], int d, int c) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " "; // In phần tử cách nhau khoảng trắng
        }
        cout << endl; // Hết một dòng (hết vòng lặp j) thì xuống dòng
    }
}

// 3. TÍNH TỔNG CÁC SỐ LẺ
int tongsole(int arr[][SIZE], int d, int c) {
    int Total = 0; // Biến tích lũy tổng
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            // Kiểm tra số lẻ: chia 2 dư khác 0
            if (arr[i][j] % 2 != 0) {
                Total += arr[i][j];
            }
        }
    }
    return Total;
}

// 4. TÌM MAX/MIN VÀ VỊ TRÍ
// Logic: Giả sử phần tử đầu tiên (arr[0][0]) là lớn nhất/nhỏ nhất, 
// sau đó đi so sánh với tất cả các số còn lại.
void max_va_vitri(int arr[][SIZE], int d, int c) {
    int max = arr[0][0];
    int toadohang = 0, toadocot = 0; // Lưu vị trí
    
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] > max) { // Nếu thấy số nào lớn hơn max hiện tại
                max = arr[i][j];   // Cập nhật max mới
                toadohang = i;     // Lưu lại dòng
                toadocot = j;      // Lưu lại cột
            }
        }
    }
    cout << "Max = " << max << endl;
    cout << "Toa do cua Max: [" << toadohang << "][" << toadocot << "]" << endl;
}

void min_va_vitri(int arr[][SIZE], int d, int c) {
    int min = arr[0][0];
    int toadohang = 0, toadocot = 0;
    
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] < min) { // Nếu thấy số nào nhỏ hơn min hiện tại
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
// Khó hơn câu 4 vì có thể ma trận KHÔNG CÓ số chẵn hoặc số lẻ nào.
void maxChan_vitri(int arr[][SIZE], int d, int c) {
    int max = -1e9; // Khởi tạo max là số cực nhỏ để tránh sai sót
    int toadohang = -1, toadocot = -1;
    int count = 0; // Biến đếm xem đã tìm thấy số chẵn nào chưa
    
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] % 2 == 0) { // Chỉ xét số CHẴN
                // Nếu đây là số chẵn đầu tiên (count==0) HOẶC nó lớn hơn max hiện tại
                if (count == 0 || arr[i][j] > max) {
                    max = arr[i][j];
                    toadohang = i;
                    toadocot = j;
                }
                count++; // Đánh dấu là đã tìm thấy ít nhất 1 số chẵn
            }
        }
    }
    
    if (count > 0) {
        cout << "Max chan = " << max << endl;
        cout << "Toa do cua Max chan: [" << toadohang << "][" << toadocot << "]" << endl;
    } else {
        cout << "Khong co so chan trong ma tran" << endl;
    }
}

void minLe_vitri(int arr[][SIZE], int d, int c) {
    int min = 1e9; // Khởi tạo min là số cực lớn
    int toadohang = -1, toadocot = -1;
    int count = 0;
    
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] % 2 != 0) { // Chỉ xét số LẺ
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
        cout << "Khong co so le trong ma tran" << endl;
    }
}

// 6. TÍNH TỔNG DÒNG K / CỘT K
int tong_dong_thu_k(int arr[][SIZE], int c, int k) {
    int Total = 0;
    // Dòng k cố định, chạy cột i từ 0 đến c-1
    for (int i = 0; i < c; i++) {
        Total += arr[k][i];
    }
    return Total;
}

int tong_cot_thu_k(int arr[][SIZE], int d, int k) {
    int Total = 0;
    // Cột k cố định, chạy dòng i từ 0 đến d-1
    for (int i = 0; i < d; i++) {
        Total += arr[i][k];
    }
    return Total;
}

// 7. TÌM DÒNG/CỘT CÓ TỔNG LỚN NHẤT
int dong_co_tong_max(int arr[][SIZE], int d, int c) {
    int tongMax = -1e9; // Khởi tạo rất nhỏ
    int dong = -1;      // Lưu chỉ số dòng có tổng max
    
    for (int i = 0; i < d; i++) { // Duyệt từng dòng
        int tongDong = 0;
        // Tính tổng của dòng i hiện tại
        for (int j = 0; j < c; j++) {
            tongDong += arr[i][j];
        }
        // So sánh với kỷ lục cũ
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
    
    for (int i = 0; i < c; i++) { // Duyệt từng cột
        int tongCot = 0;
        // Tính tổng của cột i hiện tại (duyệt dọc các dòng j)
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
    // arr[k] là địa chỉ bắt đầu dòng k
    // arr[k] + c là địa chỉ kết thúc dòng k
    sort(arr[k], arr[k] + c); 
}

void sapXepCotK(int arr[][SIZE], int d, int k) {
    // Cột không nằm liền nhau trong bộ nhớ nên phải tự viết vòng lặp hoán đổi
    for (int i = 0; i < d - 1; i++) {
        for (int j = i + 1; j < d; j++) {
            // So sánh 2 phần tử cùng cột k: arr[i][k] và arr[j][k]
            if (arr[i][k] > arr[j][k]) {
                swap(arr[i][k], arr[j][k]); // Hàm swap có sẵn của C++
            }
        }
    }
}

// 9. SẮP XẾP TOÀN BỘ MA TRẬN (Z-Order)
// Logic: Coi ma trận d*c phần tử như một mảng 1 chiều dài n phần tử
// Công thức chuyển đổi: Phần tử thứ k trong mảng 1 chiều tương ứng với arr[k/c][k%c]
void sapXepMaTranTangDan(int arr[][SIZE], int d, int c) {
    int n = d * c; // Tổng số phần tử
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            // Quy đổi i ra toạ độ dòng/cột -> arr[i/c][i%c]
            // Quy đổi j ra toạ độ dòng/cột -> arr[j/c][j%c]
            if(arr[i/c][i%c] > arr[j/c][j%c]){
                swap(arr[i/c][i%c], arr[j/c][j%c]);
            }
        }
    }
}

// 10. CỘNG 2 MA TRẬN
void congMaTran(int mt1[][SIZE], int mt2[][SIZE], int mtTong[][SIZE], int d, int c) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            // Tổng tại vị trí i,j bằng tổng 2 phần tử tương ứng
            mtTong[i][j] = mt1[i][j] + mt2[i][j];
        }
    }
}

int main() {
    // Khai báo 3 mảng: arr (chính), brr (phụ để cộng), crr (kết quả cộng)
    int arr[SIZE][SIZE], brr[SIZE][SIZE], crr[SIZE][SIZE];
    int d = 0, c = 0, k, choice;

    // Vòng lặp do-while để menu hiện lại liên tục sau mỗi lần chọn
    do {
        cout << "\n---------------- MENU ----------------\n";
        cout << "1. Nhap ma tran\n";
        cout << "2. In ma tran\n";
        cout << "3. Tinh tong so le\n";
        cout << "4. Tim max/min va vi tri\n";
        cout << "5. Tim max chan/min le va vi tri\n";
        cout << "6. Tinh tong dong/cot k\n";
        cout << "7. Tim dong/cot co tong lon nhat\n";
        cout << "8. Sap xep dong/cot k tang dan\n";
        cout << "9. Sap xep ma tran tang dan Z\n";
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
                // Cần kiểm tra d, c > 0 chưa để tránh in rác nếu chưa nhập
                if(d==0) cout << "Ban chua nhap ma tran!\n";
                else {
                    cout << "Ma tran vua nhap:\n";
                    inmatran(arr, d, c);
                }
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
                cout << "Nhap k (chi so bat dau tu 0): "; cin >> k;
                // Kiểm tra k có nằm trong phạm vi dòng/cột không
                if(k >= 0 && k < d) cout << "Tong dong " << k << ": " << tong_dong_thu_k(arr, c, k) << endl;
                else cout << "Dong k khong hop le.\n";
                
                if(k >= 0 && k < c) cout << "Tong cot " << k << ": " << tong_cot_thu_k(arr, d, k) << endl;
                else cout << "Cot k khong hop le.\n";
                break;
            case 7:
                cout << "Dong co tong lon nhat (index): " << dong_co_tong_max(arr, d, c) << endl;
                cout << "Cot co tong lon nhat (index): " << cot_co_tong_max(arr, d, c) << endl;
                break;
            case 8:
                cout << "Nhap k can sap xep: "; cin >> k;
                int type;
                cout << "1. Sap xep dong, 2. Sap xep cot: "; cin >> type;
                if(type == 1 && k >= 0 && k < d) sapXepDongK(arr, c, k);
                else if(type == 2 && k >= 0 && k < c) sapXepCotK(arr, d, k);
                else cout << "Lua chon hoac k khong hop le!\n";
                
                cout << "Ma tran sau sap xep:\n";
                inmatran(arr, d, c);
                break;
            case 9:
                sapXepMaTranTangDan(arr, d, c);
                cout << "Ma tran sau khi sap xep Z:\n";
                inmatran(arr, d, c);
                break;
            case 10:
                cout << "Nhap ma tran thu 2 (cung kich thuoc " << d << "x" << c << ") de cong:\n";
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
    } while (choice != 0); // Lặp lại nếu người dùng chưa chọn 0

    return 0;
}