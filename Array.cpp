#include <iostream>
using namespace std;

void Dynamic_Array(int* arr, int size) {
    if (arr == nullptr) {
        cout << "Error: Array chua bi delete hoac chua khoi tao" << endl;
        return;
    }
    cout << arr[4] << endl;
}

int* createArray() {
    int* arr = new int[5]{1, 2, 3, 4, 5};
    return arr;
}

int main() {
    // sizeof (1D)
    int numbers[5] = {10, 20, 30, 40, 50};
    int totalBytes = sizeof(numbers);
    int elementSize = sizeof(numbers[0]);
    int length = totalBytes / elementSize;

    // 2D Array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    cout << "In ma tran\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout.width(5);
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // sizeof (2D)
    totalBytes = sizeof(matrix);                          // 3 × 4 × 4 = 48 bytes
    int rows = sizeof(matrix) / sizeof(matrix[0]);        // 48/16 = 3
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);  // 16/4 = 4

    // 3D Array: 2 layers, 2 rows, 2 cols
    int cube[2][2][3] = {
        {{1, 2, 3},
         {4, 5, 6}},
        {{7, 8, 9},
         {10, 11, 13}}};
    // In mang 3D
    cout << "Toan bo mang 3D: " << endl;
    for (int i = 0; i < 2; i++) {
        cout << "layers " << i << ":\n";
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                cout.width(5);
                cout << cube[i][j][k] << " ";
            }
            cout << endl;
        }
    }
    cout << "\n\n";
    // sizeof (3D)
    int arr[2][3][4];
    int layers = sizeof(arr) / sizeof(arr[0]);        // 2
    rows = sizeof(arr[0]) / sizeof(arr[0][0]);        // 3
    cols = sizeof(arr[0][0]) / sizeof(arr[0][0][0]);  // 4

    /*  Array tĩnh (Static Array)
        Stored in Stack memory (Bộ nhớ ngăn xếp)
        Stack size thường ~1-8MB
        + Static Array declaration:
           C1:
              int arr1[100];
           C2:
              const int SIZE = 50;
              int arr2[SIZE];
           C3:
              #define MAX_SIZE 200
              int arr3[MAX_SIZE];
           C4:
              constexpr int LENGTH = 80;
              int arr4[LENGTH];

           // LỖI: Không thể dùng biến thường
           // int n = 10;
           // int arr5[n];  // COMPILE ERROR (trừ một số compiler hỗ trợ VLA)

    */
    /*  Array động (Dynamic Array)
        Có kích thước được xác định tại thời điểm chạy (runtime) và được cấp phát trên Heap memory
        Kích thước có thể là biến (không cần hằng số)
        Lưu trên Heap memory (giới hạn lớn hơn Stack)
        Phải tự quản lý bộ nhớ (new/delete)
        + Dynamic Array allocation syntax:
           // Cấp phát (allocation)
           kieu_du_lieu* ten_con_tro = new kieu_du_lieu[kich_thuoc];
           int* arr = nullptr;

           // Giải phóng
           delete[] ten_con_tro;
    */
    int* myArr = createArray();
    cout << myArr[2];
    return 0;
    int* a = new int[1000]{1, 2, 3, 4, 5};
    Dynamic_Array(a, 1000);
    delete[] a;   // delete để giải phóng 4000 bytes trên Heap (Ra khỏi scope, Stack tự động "pop" (thu hồi) -> Tự động giải phóng; Heap: Cần delete)
    a = nullptr;  // ptr không trỏ đến vùng nhớ nào

    return 0;
}