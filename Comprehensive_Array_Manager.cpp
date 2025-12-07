#include <cmath>
#include <iostream>
using namespace std;

void basic_information(int arr[], int n) {
    int max = arr[0], min = arr[0], sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (max < arr[i]) max = arr[i];
        if (min > arr[i]) min = arr[i];
    }
    cout << "Max of array: " << max << endl;
    cout << "Min of array: " << min << endl;
    cout << "Average of array: " << ((float)sum / n);
}
bool isPrime(int n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    int lim = sqrt(n);
    for (int i = 3; i <= lim; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
bool Square_num(int n) {
    if (n < 0) return false;
    return (int)sqrt(n) == sqrt(n);
}
int GCD(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int searchAndCount(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) count++;
    }
    return count;
}

void hoandoi(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void selection_Sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        hoandoi(arr[i], arr[min_idx]);
    }
}

bool checkSymmetry(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) return false;
    }
    return true;
}

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
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;
}

void deleteElement(int arr[], int& n, int pos) {
    // Kiểm tra điều kiện hợp lệ
    // pos phải từ 0 đến n-1 (trong phạm vi mảng)
    // Mảng phải có ít nhất 1 phần tử
    if (pos < 0 || pos >= n) {
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
        arr[i] = arr[i + 1];
    }

    n--;
}

int main() {
    int choice, n = 0;
    int arr[100];
    do {
        cout << "Menu Functional Map: \n";
        cout << "1. Import array\n";
        cout << "2. Export array\n";
        cout << "3. Basic information\n";
        cout << "4. Numerical analysis\n";
        cout << "5. Search and Count\n";
        cout << "6. Arrange\n";
        cout << "7. Check symmetry\n";
        cout << "8. Insert element\n";
        cout << "9. Delete element\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:  // NHẬP DỮ LIỆU
                cout << "Enter the number of elements (n): ";
                cin >> n;
                // Kiểm tra n hợp lệ (nếu thích)
                while (n <= 0 || n > 100) {
                    cout << "Invalid n! Enter again (0 < n <= 100): ";
                    cin >> n;
                }
                cout << "Enter " << n << " elements:\n";
                for (int i = 0; i < n; i++) {
                    cout << "Element " << i << ": ";  // Nhắc người dùng đang nhập số thứ mấy
                    cin >> arr[i];
                }
                cout << "--> Import success!\n";
                break;

            case 2:  // XUẤT DỮ LIỆU (Dùng lại n và arr đã nhập ở Case 1)
                if (n == 0) {
                    cout << "Array is empty! Please select Option 1 first.\n";
                } else {
                    cout << "Current Array: ";
                    for (int i = 0; i < n; i++) {
                        cout << arr[i] << " ";  // In ra màn hình chứ không nhập vào
                    }
                    cout << endl;
                }
                break;
            case 3:
                if (n == 0) {
                    cout << "Array is empty! Please select Option 1 first.\n";
                } else {
                    basic_information(arr, n);
                }
                break;
            case 4:
                if (n == 0) {
                    cout << "Array is empty! Please select Option 1 first.\n";
                } else {
                    cout << "The Prime of arr: ";
                    for (int i = 0; i < n; i++) {
                        if (isPrime(arr[i])) {
                            cout << arr[i] << " ";
                        }
                    }
                    cout << endl;
                    cout << "The Square Number of arr: ";
                    for (int i = 0; i < n; i++) {
                        if (Square_num(arr[i])) {
                            cout << arr[i] << " ";
                        }
                    }
                    cout << endl;
                    cout << "GCD of the entire array: ";
                    int resultGCD = arr[0];
                    for (int i = 1; i < n; i++) {
                        resultGCD = GCD(resultGCD, arr[i]);
                    }
                    cout << resultGCD;
                }
                break;
            case 5: {
                int x;
                cin >> x;
                if (n == 0)
                    cout << "Array is empty! Please select Option 1 first.\n";
                else
                    cout << "So luong phan tu trong mang bang gia tri " << x << " la: " << searchAndCount(arr, n, x) << endl;
                break;
            }
            case 6:
                if (n == 0)
                    cout << "Array is empty! Please select Option 1 first.\n";
                else
                    selection_Sort(arr, n);
                break;
            case 7:
                if (checkSymmetry(arr, n))
                    cout << "Symmetry" << endl;
                else
                    cout << "Asymmetric" << endl;
                break;
            case 8: {
                int val, pos;
                cout << "Nhap gia tri can chen: ";
                cin >> val;
                cout << "Nhap vi tri can chen (0 den " << n << "): ";
                cin >> pos;
                insert(arr, n, val, pos);
                cout << "Da chen xong.\n";
                break;
            }
            case 9: {
                int pos;
                cout << "Nhap vi tri can xoa: ";
                cin >> pos;
                deleteElement(arr, n, pos);
                cout << "Da xoa xong.\n";
                break;
            }
            case 0:
                break;
            default:
                cout << "Your selection is invalid";
        }
    } while (choice != 0);
    return 0;
}