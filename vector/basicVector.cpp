#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// Enter vector
void enterVector(vector<int>& v, int n) {
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

// Output vector
void outputVector(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

// Tìm vị trí xuất hiện đầu tiên của x (Find the first occurrence of x)
void find_the_first_appearance_location(vector<int> v, int x) {
    for (int i = 0; i < v.size(); i++) {
        if (v.at(i) == x) {
            cout << "Tim thay tai vi tri " << i;
            return;
        }
    }
}

// Find max/min
int findMax(vector<int> v) {
    int maxVal = v.at(0);
    for (int i = 0; i < v.size(); i++) {
        if (v.at(i) > maxVal) maxVal = v.at(i);
    }
    return maxVal;
}

// Lọc số chẵn (Filter even numbers)
void filterEvenNumbers(vector<int> v, vector<int>& Even) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            Even.push_back(v[i]);
        }
    }
}

// Đếm tần suất (Frequency counting)
int frequencyCounting(vector<int> v, int Val) {
    int count[1001] = {};
    for (int i = 0; i < v.size(); i++) {
        count[v[i]]++;
    }
    return count[Val];
}

// Xóa phần tử trùng (Remove duplicate elements)
void removeDuplicateElements(vector<int> v, vector<int>& unique_v) {
    unique_v.push_back(v[0]);
    for (int i = 1; i < v.size(); i++) {
        if (v[i] != v[i - 1]) {
            unique_v.push_back(v[i]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v;

    enterVector(v, n);
    outputVector(v);

    // sort(v.begin(), v.end());                   // tăng dần
    // sort(v.begin(), v.end(), greater<int>());   // giảm dần
    // reverse(v.begin(), v.end());

    vector<int> Even;

    cout << "5 xuat hien: " << frequencyCounting(v, 5) << " lan" << endl;

    vector<int> unique_v;
    removeDuplicateElements(v, unique_v);

    return 0;
}