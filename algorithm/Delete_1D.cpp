#include <iostream>
using namespace std;

void deleteElement(int arr[], int &n, int pos) {
    // Kiểm tra điều kiện hợp lệ
    // pos phải từ 0 đến n-1 (trong phạm vi mảng)
    // Mảng phải có ít nhất 1 phần tử
    if (pos <0 || pos >= n) {
        cout << "Vi tri xoa khong hop le!" << endl;
        return;
    }

    if (n == 0) {
        cout << "Mang rong, khong the xoa!" << endl;
        return;
    }
    // Bước 1: Dịch chuyển các phần tử về phía trước
    // Duyệt từ vị trí xóa đến cuối mảng
    // Phải duyệt xuôi để lấp chỗ trống
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i+1];
    }
    
    n--;
}

int main() {
    

    return 0;
}