#include <iostream>
using namespace std;

//Linear Search
int Linear_Search(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;   // Trả về vị trí tìm thấy (index)
        }
    }
    return -1;   // Không tìm thấy
}

// Binary Search
int Binary_Search(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return mid;   //Trả về vị trí tìm thấy
        }
        if (arr[mid] < x) {
            mid = left + 1;
        }
        else {
            mid = right - 1;
        }
    }
    return -1;   // Không tìm thấy
}
int main() {
    

    return 0;
}