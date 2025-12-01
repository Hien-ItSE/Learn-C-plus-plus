#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int choice;     // choose which figure to draw
    int height;     // the height of the figure
    int numStars;   // number of stars in each line
    int numPadding; // number of padding spaces at the beginning of each line

    cout << "1. Solid triangle (Tam giác đặc)\n";
    cout << "2. Right isosceles triangle (Tam giác vuông cân)\n";
    cout << "3. Isosceles Triangle/Pyramid (Tam giác cân/Kim tự tháp)\n";
    cout << "4. hollow rectangle (hình chữ nhật rỗng)\n";
    cout << "5. Right arrow (mũi tên phải), 2 for loops\n";
    cout << "6. Right arrow (mũi tên phải), 1 Main Loop\n";
    cout << "7. Rhombus (hình thoi), 2 for loops\n";
    cout << "8. Rhombus (hình thoi), 2 for loops, 1 Main Loop\n";
    cout << "9. Rhombus (hình thoi), use abs\n";
    cout << "10. Hollow Rhombus, 2 for loop\n";


    cout << "Enter choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            // Solid triangle (Tam giác đặc)
            cout << "Please input the height: ";
            cin >> height;
            numStars = 1;
            for (int i = 1; i <= height; i++)
            {
                for (int j = 1; j <= numStars; j++)
                {
                    cout << "*";
                }
                numStars += 2;
                cout << endl;
            }
            break;
        case 2:
            // Right isosceles triangle (Tam giác vuông cân)
            cout << "Please input the height: ";
            cin >> height;
            for (int i = 1; i <= height; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case 3:
            // Isosceles Triangle/Pyramid (Tam giác cân/Kim tự tháp)
            // Tách thành 2 khối: in khoảng trắng, in dấu sao
            cout << "Please input the height: ";
            cin >> height;
            for (int i = 1; i <= height; i++)
            {
                // Khối 1: In khoảng trắng (theo công thức height - i)
                for (int space = 1; space <= height - i; space++)
                {
                    cout << " ";
                }
                // Khối 2: In dấu sao (theo công thức 2*i - 1)
                for (int star = 1; star <= 2 * i - 1; star++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case 4:
            // Hollow Shapes (Hình rỗng)
            // Find Boundary Conditions (Tìm điều kiện biên)
            cout << "Please input the height: ";
            cin >> height;
            for (int i = 1; i <= height; i++)
            {
                for (int j = 1; j <= height; j++)
                {
                    if (i == 1 || i == height || j == 1 || j == height)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << endl;
            }
            break;
        case 5:
            // Right arrow (mũi tên phải), 2 for loops
            cout << "Please enter the thickness of the top half (Vui lòng nhập độ dày của nửa trên): ";
            cin >> n;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            for (int i = 1; i <= n - 1; i++)
            {
                for (int j = 1; j <= n - i; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case 6:
            // Right arrow (mũi tên phải), 1 Main Loop
            cout << "Please enter the thickness of the top half (Vui lòng nhập độ dày của nửa trên): ";
            cin >> n;
            for (int i = 1; i <= 2 * n - 1; i++)
            {
                int starsToPrint;
                if (i <= n)
                {
                    starsToPrint = i;
                }
                else
                {
                    starsToPrint = 2 * n - i;
                }
                for (int j = 1; j <= starsToPrint; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case 7:
            // Rhombus (hình thoi), 2 for loops
            cout << "Please enter the thickness of the top half (Vui lòng nhập độ dày của nửa trên): ";
            cin >> n;
            for (int i = 1; i <= n; i++)
            {
                // Khoảng trắng
                for (int space = 1; space <= n - i; space++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= 2 * i - 1; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            for (int i = n - 1; i >= 1; i--)
            {
                for (int space = 1; space <= n - i; space++)
                {
                    cout << " ";
                }
                for (int j = 1; j <= 2 * i - 1; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case 8: {
            // Rhombus (hình thoi), 1 Main Loop
            cout << "Please enter the thickness of the top half (Vui lòng nhập độ dày của nửa trên): ";
            cin >> n;
            // Tổng số dòng của cả hình thoi
            int totalRows = 2 * n - 1;
            for (int i = 1; i <= totalRows; i++)
            {
                // XÁC ĐỊNH DÒNG HIỆU DỤNG (LOGIC SOI GƯƠNG)
                int effectiveRows;
                if (i <= n)
                {
                    effectiveRows = i; // Nửa trên: giữ nguyên
                }
                else
                {
                    effectiveRows = 2 * n - i; // Nửa dưới: lật ngược lại
                }
                int limSpaces = n - effectiveRows;
                int limStars = 2 * effectiveRows - 1;
                for (int space = 1; space <= limSpaces; space++)
                {
                    cout << " ";
                }
                for (int star = 1; star <= limStars; star++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        }
        case 9: 
            // Rhombus (hình thoi), use abs
            cout << "Please enter the thickness of the top half (Vui lòng nhập độ dày của nửa trên): ";
            cin >> n;
            for (int i = -(n - 1); i <= n - 1; i++)
            {
                int distance = abs(i);
                for (int space = 1; space <= distance; space++)
                {
                    cout << " ";
                }
                // SốSao = (SốSaoTạiTâm) - 2 * (KhoảngCách)
                // SốSao = (2n - 1) - 2 * distance
                //       = 2 * (n - distance) - 1
                for (int star = 1; star <= 2 * (n - distance) - 1; star++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case 10:
            // Hollow Rhombus, 2 for loop
            cout << "Please enter the thickness of the top half (Vui lòng nhập độ dày của nửa trên): ";
            cin >> n;
            for (int i = 1; i <= n; i++)
            {
                for (int space = 1; space <= n - i; space++)
                {
                    cout << " ";
                }
                for (int star = 1; star <= 2 * i - 1; star++)
                {
                    if (star == 1 || star == 2 * i - 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << endl;
            }
            for (int i = n - 1; i >= 1; i--)
            {
                for (int space = 1; space <= n - i; space++)
                {
                    cout << " ";
                }
                for (int star = 1; star <= 2 * i - 1; star++)
                {
                    if (star == 1 || star == 2 * i - 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << endl;
            }
            break;
        case 11: {
            // Hollow Rhombus, 1 main loop
            cout << "Please enter the thickness of the top half (Vui lòng nhập độ dày của nửa trên): ";
            cin >> n;
            int totalRows = 2 * n - 1;
            for (int i = 1; i <= 2 * n - 1; i++) {
                int effectiveRows;
                if (i <= n) {
                    effectiveRows = i;
                }
                else {
                    effectiveRows = 2 * n - i;
                }
                int limSpaces = n - effectiveRows;
                int limStars = 2 * effectiveRows - 1;
                for (int space = 1; space <= limSpaces; space++){
                    cout << " ";
                }
                for (int star = 1; star <= limStars; star++) {
                    if (star == 1 || star == limStars) {
                        cout << "*";
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << endl;
            }
            break;
        }
        case 12:
            // Hollow Rhombus, use abs
            cout << "Please enter the thickness of the top half (Vui lòng nhập độ dày của nửa trên): ";
            cin >> n;
            for (int i = - (n - 1); i <= n - 1; i++) {
                int distance = abs(i);
                for (int space = 1; space <= distance; space++) {
                    cout << " ";
                }
                // SốSao = (SốSaoTạiTâm) - 2 * (KhoảngCách)
                // SốSao = (2n - 1) - 2 * distance
                //       = 2 * (n - distance) - 1
                for (int star = 1; star <= 2 * (n - distance) - 1; star++) {
                    if (star == 1 || star == 2 * (n - distance) - 1) {
                        cout << "*";
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << endl;
            }
            break;
        case 13:
            cout << "Please input the height:";
            cin >> n;
            //Initial assignments
            numStars = 2 * n - 1;
            numPadding = 0;
            //Draw figure
            for (int i = 0; i < n; i++)	//every value of i is correspondent to 1 line of the fig
            {
                //Step 1: print the padding spaces (if any)

                //Step 2: print the stars
                for (int j = 0; j < numStars; j++) cout << "*";
                //Step 3: Adjust the numbers and go to the new line
            }


























    }






























    return 0;
}
