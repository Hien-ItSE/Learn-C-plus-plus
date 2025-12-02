#include <iostream> // luong nhap xuat du lieu
#include <climits> //gioi han kieu du lieu
#include <cmath> // cac ham toan hoc
#include <iomanip> // dinh dang dau ra
#include <numbers>

using ll = long long;
typedef  float songuyen;	// Kieu_du_lieu Ten_bien;
//  #define ten_thay_the kieu_du_lieu
// #define ll long long
// #define PI 3.14
// #define FOR(i, a, b) for(int i = (a); i< (b); ++i)
using namespace std;   // su dung ten thu vien std ( or std::cout, std::cin)

int main(){
/*	string cpp,f;
	cout << "Nhap chuoi: ", cin >> cpp;
	f=cpp + "1";
	cout << "Do dai chuoi: " << f.length() << endl;
	cout << f << endl;
*/

/*
	auto f = cout.flags();
	float a;
	cin >> a;
	cout << setprecision(5) << a << endl;
	cout << fixed << setprecision(3) << a << endl;
	cout.flags(f);
	cout << setprecision(5) << a << endl;

	// auto f = cout.flags();	(ios::fmtflags f = cout.flags();)
	// ...
	// cout.flags(f);

	ios::fmtflags oldFlags = cout.flags();
	float a;
	cin >> a;
	cout << fixed << setprecision(3) << a << endl;
	cout.flags(oldFlags);        
	cout << setprecision(5) << a << endl;   
*/

//Assignment operator(toan tu gan)
//Mathematical operator: + - * / %
//Comparison operator: > >= < <= == !=
//Logical operator: AND OR NOT
//                  &&  ||  !

//abs(x)
//pow(a, b) -> double
//sqrt(n) -> double
//round(a) -> double
//floor(x) -> double    //Trả về số nguyên lớn nhất ≤ x
//ceil(x) -> double    //Trả về số nguyên nhỏ nhất ≥ x

// 0: false
// #0: true

	int a, b;
	a=a&b; // a&=b
    a=a|b; // a|=b
    a=a>>b; // a>>=b
    a=a<<b; // a<<=b

	return 0;
}