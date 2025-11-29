#include <iostream>
#include <math.h>
#include <iterator>
#include <vector>
using namespace std;
using ll = long long;
/* Vocab
Khai báo mảng (Declaration)
Khởi tạo mảng (Initialization)
Duyệt mảng (Iteration)
Giá trị rác (garbage value)
Giá trị không hợp lệ(invalid value)
liên tiếp (consecutively)
truy cập (access)
thay đổi (modify/change)
phần tử (element)
chỉ số (index)
kích thước mảng (array size)
mảng một chiều (one-dimensional array)
mảng đa chiều (multi-dimensional array)
quá giới hạn (out of bounds)
Dựa trên phạm vi (Range-based)
Phép toán Con trỏ (Pointer Arithmetic)
Toán tử * (Dereference)
Rò rỉ bộ nhớ (Memory Leak)
Hằng số (constant)
Mảng đa chiều (Multidimensional Arrays)
Hàng (Rows)
Cột (Columns)
Phân rã mảng (Array Decay)
Bộ nhớ vật lý (Physical memory)   //RAM (Bộ nhớ vật lý)
Không liên tục (intermittent)
Vòng lặp lồng nhau (nested loops)
Sự quản lý (Management)
Toán học (Mathematic)
Duyệt qua (Browse)
Mảng tĩnh (C-style array)
Kích thước động (Dynamic Size)
Có thể mở rộng (Growable)
Ngoài phạm vi (out of range)
Dung tích (Capacity)
Thuật toán (algorithm)
*/

/* Structure
1D Array:
Kieu_DuLieu tenmang[So luong phan tu cua mang];
2D Array:
kiểu_dữ_liệu tên_mảng[số_hàng][số_cột];
*/

bool check_primeNum(int n){
    int lim = sqrt(n);
    for(int i=2; i<=lim; i++){
        if(n % i == 0)
            return false;
    }
    return n>1;
}
bool check_primeNum2(ll n){
    if(n<2) return false;
    if(n%2==0) return n==2;
    ll lim = sqrt(n);
    for(ll i=3; i<=lim; i+=2){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
/* Input and Traversal
    //Nhập mảng (Input)
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    //Range-based for loop
    for(int &x : arr){
        cin >> x;
    }

    //Duyệt mảng (Traversal)
    for(int i=0; i<n; i++){
        cout << arr[i];
    }
    //Range-based for loop
    for(int x : arr){
        cout << x << " ";
    }
*/
/* Array size
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of the array arr: " << length << endl;
    or
    size() 
*/
/* Total
Khai báo một mảng số nguyên gồm 5 phần tử bất kỳ.
Sử dụng vòng lặp để tính tổng các giá trị trong mảng.
In kết quả ra màn hình. 
    int a[5]={1,2,3,4,5};
    int total=0;
    for(int i = 0; i<5; i++){
        total+=a[i];
    }

    //Range-based for loop
    for(int x : a){
        total+=x;
    }

    cout << total; 
*/
/* Arrays and Pointers 
    int arr[3] = {10, 20, 30};

    cout << "Gia tri arr[0]: " << arr[0] << endl;
    
    // In ra địa chỉ bộ nhớ (dạng Hex, vd: 0x7ffe...)
    cout << "Dia chi cua arr[0] (&arr[0]): " << &arr[0] << endl;
    
    // In ra giá trị của tên mảng
    cout << "Gia tri cua arr: " << arr << endl;

    // Kết luận: &arr[0] và arr là NHƯ NHAU.
    if((&arr[1]) == arr+1) cout << "true\n";
    else cout << "false\n"; 

    Toán tử * (Dereference): Dùng để "mở hộp" lấy giá trị tại địa chỉ đó
    *arr chính là arr[0] (Lấy giá trị tại địa chỉ đầu)
    *(arr + 1) chính là arr[1] 
    Công thức tương đương (The Golden Rule): arr[i] <=> *(arr + i)
                                           Use Index    Use Pointer
*/
/* Iteration
    //Khởi tạo mảng 2 chiều (3 hàng, 4 cột)
    int matrix[3][4] = {
        {1, 2, 3, 4},    // Hàng 0
        {5, 6, 7, 8},    // Hàng 1
        {9, 10, 11, 12}  // Hàng 2
    };
    //Nested Loops
    for(int i=0; i<3; i++) {
        for(int j=0; j<4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    } 
*/
/* vector
- Dynamic Size: Growable
- Automatic Memory Management: You do NOT need to call new or delete. Vector takes care of the cleaning itself
- Syntax: vector<kiểu_dữ_liệu> tên_biến;
- 5 core actions to work:
    + Add an element (push_back)
        vector<int> v;
        v.push_back(10); // v: {10}
        v.push_back(20); // v: {10, 20}
    
    + Size   ( v.size() )
    + Element Access ( [] or at() )
        cout << v[0];    // In ra 10
        cout << v.at(1); // In ra 20
    + Removing the End Element (pop_back)
        v.pop_back(); // Xóa 20. v chỉ còn {10}
    + size: kích thước mảng
      capacity: dung tích mảng
      arrayName.reserve(số lượng ô nhớ)   //không giảm
      Khi (size == capacity), vector sẽ xin 1 vùng nhớ lớn gấp đôi vùng cũ từ RAM, copy sang vùng mới, xóa vùng cũ
*/
/* Input and Iteration   
    vector<int> arr; // Mảng rỗng
    int input;
    cout << "Nhap cac so (nhap -1 de dung): " << endl;

    // Vòng lặp nhập dữ liệu liên tục
    while (true) {
        cin >> input;
        if (input == -1) break; // Stop condition
        arr.push_back(input); // Tự động mở rộng mảng để chứa số mới
    }

    // In ra
    cout << "Mang ban da nhap (Size = " << arr.size() << "): ";
    for (int x : arr) {   // range-based for
        cout << x << " ";
    }

    // Resize
    arr.resize(2); // Chỉ giữ lại 2 phần tử đầu, xóa hết phần sau
*/
    return 0;
}