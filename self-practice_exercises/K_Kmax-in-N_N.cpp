#include <iostream>
using namespace std;

int main() {
    int n, k;
    int A[55][55];
    cin >> n >> k;
    int sum = 0;
    int sumMax = -1;
    // Nhap mang
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i <= n - k; i++) {
        for (int j = 0; j <= n - k; j++){
            sum = 0;
            for(int x = 0; x < k; x++) {
                for (int y = 0; y<k; y++) {
                    sum += A[x+i][y+j];
                }
            }
            if (sumMax < sum) sumMax = sum;
        }
    }

    cout << sumMax;

    return 0;
}