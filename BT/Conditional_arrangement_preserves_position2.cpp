#include <bits/stdc++.h>
using namespace std;

/* Yêu cầu:
Cho mảng n số nguyên
Sắp xếp sao cho:
Số lẻ xếp theo thứ tự giảm dần (từ lớn đến nhỏ)
Số chẵn xếp theo thứ tự tăng dần (từ nhỏ đến lớn)
In mảng sau khi sắp xếp (Space Complexity O(1))*/

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }

    // THUẬT TOÁN O(1) SPACE - INTERCHANGE SORT CẢI TIẾN
    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = i + 1; j < a.size(); j++) {
            // TH1: Even Even
            if (a[i] % 2 == 0 && a[j] % 2 == 0) {
                if (a[i] > a[j]) swap(a[i], a[j]);
            }
            // TH2: Odd Odd
            if (a[i] % 2 != 0 && a[j] % 2 != 0) {
                if (a[i] < a[j]) swap(a[i], a[j]);
            }
            // TH3: Không làm gì
        }
    }

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ((i < a.size() - 1) ? " " : "");
    }

    return 0;
}