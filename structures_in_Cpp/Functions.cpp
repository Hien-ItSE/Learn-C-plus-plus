#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// returntype functionName ( paraneter1, parameter2,...){
//     Function body
// }
void xinchao(int n){
    cout << "28tech.com.vn\n";
    cout << "Hoc lap trinh va thuat toan !\n";
    cout << n << endl;
}
ll factorial(int m){
    ll res = 1;
    for (int i = 1; i <= m; i++){
        res *= i;
    }
    return res;
}
int sum_digit(long long n){
    int tong = 0;
    while(n){
        tong += n % 10;
        n/=10;
    }
    return tong;
}
bool check(long long n){
    int tong = 0;
    while(n){
        tong += n % 10;
        n /= 10;
    }
    return tong % 10 == 8;
}
//pass by value
void thaydoi(int n){
    n += 1000;
}
//pass by reference: shallow copy
void thaydoi2(int &n){
    n += 1000;
}
bool chua6(int n){
    while (n){
        if (n % 10 == 6){
            return true;
        }
        n /= 10;
    }
    return false;
}
bool tongchan(int n) {
    int tong = 0;
    while (n) {
        tong += n % 10;
        n /= 10;
    }
    return tong % 2 == 0;
}
bool chanle(int n){
    int chan = 0, le = 0;
    while (n){
        if (n % 2 == 0) ++chan;
        else ++le;
        n /= 10;
    }
    return le > chan;
}
//Hàm làm tròn số
int round_Num(double x){
    double tuyetdoi = fabs(x);
    double phandu = tuyetdoi - (int)tuyetdoi;
    if (phandu >= 0.5) {
        if (x < 0) return (int)x - 1;
        else return (int)x + 1;
    }
    else {
        return (int)x;
    }
}
//Tìm USCLN của 2 số nguyên không âm(không đồng thời bằng 0)
unsigned USCLN(unsigned a, unsigned b) {
    if(a==0 && b==0) return 0;
    if(b==0) return a;
    return USCLN(b, a % b);
}



int main(){ 
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// ios::sync_with_stdio(false);
// cin.tie(nullptr);

//cout << sum_digit(2025) << flush << endl;
    // long long x ; cin >> x;
    // if (check(x)){
    //     cout << "28tech\n";
    // }
    // else{
    //     cout << "29tech\n";
    // }
//kiem tra so dep
/*     int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        if (chua6(i) && tongchan(i) && chanle(i)){
            cout << i << " ";
        }
    } */
    cout << USCLN(6,0) << endl;
    return 0;
}