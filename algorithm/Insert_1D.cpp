#include <iostream>
using namespace std;

// Hàm chèn phần tử vào mảng tại vị trí pos
void insert(int arr[], int& n, int value, int pos) {
    // Kiểm tra điều kiện hợp lệ
    // pos từ 0 đến n-1
    // n phải nhỏ hơn kích thước tối đa của mảng
    if (pos < 0 || pos > n) {
        cout << "Vi tri chen khong hop le!" << endl;
        return;
    }
    // Step 1: Dịch chuyển các phần tử về phía sau(->)
    // Duyệt từ cuối mảng về vị trí chèn
    // Phải duyệt ngược để không ghi đè dữ liệu
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    n++;
}

int main() {
    return 0;
}