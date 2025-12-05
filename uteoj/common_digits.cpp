#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
/* 
    // Tách các chữ số
    int a1 = a / 10, a2 = a % 10;
    int b1 = b / 10, b2 = b % 10;

    int commonCount = 0; // Biến đếm số lượng chữ số chung

    // Duyệt qua tất cả các chữ số có thể có (0-9)
    // Đây là kỹ thuật "quét không gian mẫu"
    for (int digit = 0; digit <= 9; digit++) {
        // Kiểm tra digit có trong a không?
        bool inA = (digit == a1 || digit == a2);
        
        // Kiểm tra digit có trong b không?
        bool inB = (digit == b1 || digit == b2);

        // Nếu xuất hiện ở cả hai -> Tăng biến đếm
        if (inA && inB) {
            commonCount++;
        }
*/

/*
    int maskA = (1 << (a/10)) | (1 << (a%10)); 
    int maskB = (1 << (b/10)) | (1 << (b%10));
    int commonMask = maskA & maskB;
    if (__builtin_popcount(commonMask) == 1) cout << 1;
    else cout << 0;
*/
    return 0;
}