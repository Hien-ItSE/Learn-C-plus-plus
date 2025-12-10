#include <iostream>
using namespace std;

void swap(int* a, int* b) {  // Truyền con trỏ
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm nhận con trỏ
void increment(int* ptr) {
    (*ptr)++;
}

// 3 cách khai báo GIỐNG NHAU:
void printArray1(int arr[], int size) { // Dùng index
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArray2(int* arr, int size) {  // Dùng pointer
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArray3(int* arr, int size) {  // Dùng pointer arithmetic
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int x = 100, y = 20;
    int* ptr = &x;                                             // ptr là con trỏ(pointer) lưu địa chỉ của x
    cout << "The value of x is: " << x << endl;                // 100
    cout << "The value that ptr points to: " << *ptr << endl;  // 100
    cout << "The address of x is: " << &x << endl;             // VD: 0x7ffd5e8b4a6c
    cout << "The value of ptr is: " << ptr << endl;            // 0x7ffd5e8b4a6c (giống &x)

    swap(&x, &y);  // Truyền địa chỉ
    cout << "x=" << x << ", y=" << y << endl
         << endl;  // x=20, y=100
    cout << "Size of the address: " << sizeof(&x) << " bytes" << endl;

    /* Các cách khai báo:
    int x = 100;

    // Cách 1: Khai báo và gán ngay
    int* ptr1 = &x;

    // Cách 2: Khai báo sau đó gán
    int* ptr2;
    ptr2 = &x;

    // Cách 3: Khởi tạo nullptr (C++11)
    int* ptr3 = nullptr;
    ptr3 = &x;

    // Cách 4: Khởi tạo NULL (C-style)
    int* ptr4 = NULL;

    // LƯU Ý: Vị trí dấu *
    int* p1, p2;   // p1 là con trỏ, p2 là int thường!
    int *p3, *p4;  // Cả 2 đều là con trỏ
    */

    cout << "sizeof(ptr): " << sizeof(ptr) << endl;  // 4 bytes -> 32-bit

    *ptr = 300;
    cout << "The value of x is: " << x << endl
         << endl;  // x = 300

    ptr = nullptr;

    int* ptr1 = NULL;
    int* ptr2 = nullptr;  // C++11 (khuyến nghị)
    int* ptr3 = 0;
    if (ptr1 == 0) {  // NULL/nullptr/0 bằng nhau
        cout << "ptr1 is NULL" << endl
             << endl;
    }

    cout << "Nhieu con tro cung tro 1 bien: " << endl;
    int g = 100;
    int* pointer1 = &g;
    int* pointer2 = &g;
    int* pointer3 = &g;
    cout << "g = " << g << endl;                  // 100
    cout << "*pointer1 = " << *pointer1 << endl;  // 100
    cout << "*pointer2 = " << *pointer2 << endl;  // 100
    cout << "*pointer3 = " << *pointer3 << endl;  // 100

    // Thay doi qua pointer1
    *pointer1 = 200;  // Truy cap gia tri con tro tro den (Di vao dia chi no dang luu) -> Thay doi gia tri tai dia chi do
    cout << "\nSau khi *pointer1 = 200: " << endl;
    cout << "g = " << g << endl;
    cout << "*pointer2 = " << *pointer2 << endl;
    cout << "*pointer3 = " << *pointer3 << endl;
    // Tất cả đều thay đổi vì cùng trỏ đến x! (Địa chỉ của x, không phải giá trị)
    cout << "\nThe address of pointer1 is: " << &pointer1;
    cout << "\nThe address of pointer1 is: " << &pointer2;
    cout << "\nThe address of pointer1 is: " << &pointer3;
    cout << "\n\n";

    cout << "POINTER TO ARRAY\n";
    int arr[5] = {10, 20, 30, 40, 50};
    int* Ptr = arr;  // Ptr trỏ đến phần tử đầu

    // Array name = Con trỏ đến phần tử đầu
    // arr và &arr[0] là giống nhau
    cout << "arr = " << arr << endl;          // Địa chỉ phần tử đầu
    cout << "&arr[0] = " << &arr[0] << endl;  // Giống arr

    cout << "*arr = " << *arr << endl;  // 10
    cout << "arr[0] = " << arr[0] << endl
         << endl;  // 10

    // Hai cách truy cập GIỐNG NHAU:
    cout << "arr[0] = " << arr[0] << endl;  // 10
    cout << "Ptr[0] = " << Ptr[0] << endl;  // 10
    cout << "*Ptr = " << *Ptr << endl;      // 10

    cout << "arr[2] = " << arr[2] << endl;  // 30
    cout << "Ptr[2] = " << Ptr[2] << endl;  // 30
    cout << "*(Ptr+2) = " << *(Ptr + 2) << endl
         << endl;  // 30

    cout << "Duyet array bang con tro(pointer)" << endl;

    // C1: Use index
    cout << "C1: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << Ptr[i] << " ";
    }
    cout << endl;

    // C2: Use pointer arithmetic
    cout << "C2: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(Ptr + i) << " ";
    }
    cout << endl;

    // C3: Di chuyen con tro
    cout << "C3: " << endl;
    int* end = arr + 5;
    for (int* p = arr; p < end; p++) {
        cout << *p << " ";
    }
    cout << endl
         << endl;

    // POINTER ARITHMETIC (SỐ HỌC CON TRỎ)
    cout << "POINTER ARITHMETIC: " << endl;
    cout << "Ptr tro den: " << *Ptr << endl;  // 10

    // Tăng con trỏ (+)
    Ptr++;                                      // Ptr += 1
    cout << "Ptr++ tro den: " << *Ptr << endl;  // 20

    Ptr = arr;
    cout << "Ptr=arr tro den: " << *Ptr << endl;  // 10
    
    Ptr++;
    cout << sizeof(Ptr-arr);

    char arrChar[3] = {'A', 'B', 'C'};
    char* pChar = arrChar;
    cout << "\npChar: " << (void*)pChar << endl;
    cout << "\npChar: " << pChar << endl;


    cout << "Truyen con tro vao ham: " << endl;
    g = 10;
    increment(&g);
    cout << "Sau khi goi ham, g = " << g << endl << endl;


    // Truyền array vào hàm (thực chất là con trỏ)
    int numbers[5] = {10, 20, 30, 40, 50};
    
    printArray1(numbers, 5);
    printArray2(numbers, 5);
    printArray3(numbers, 5);

    /* 
    Truyền array vào hàm, không truyền size:   printArray1(numbers);
    -> Mất thông tin về kích thước array
    => numbers "decay" thành int*
    Kích thước con trỏ:   8 bytes(64-bit)
                          4 bytes(32-bit)
    */

    // Biến static (tồn tại suốt chương trình)

    return 0;
}