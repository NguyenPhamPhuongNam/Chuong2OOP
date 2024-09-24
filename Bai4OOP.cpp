#include<bits/stdc++.h>
#include <chrono>
using namespace std;
#define int long long
const int INF = numeric_limits<int>::max();
const int nax = (int)(2005);
const int MAXN= (int)(1e6+5);
const int mod =1e9+2277;
const int BASE = (int)(301);
#define all(x) (x).begin(), (x).end()
#define size(x) ((int)x.size())
#define double long double
#define pii pair<int, int>
#define tup tuple<int, int, int>
#define iii pair<pii, int>
#define unsetbit(mask, x) ((mask)&=(~(1 << x)))
#define setbit(mask, x) ((mask)|=(1 << x))
#define reversebit(mask, x) ((mask) ^=(1 << n))
int dx[4] = { -1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};
const int d8x[8] = { -1, 1, 0, 0, -1, 1, 1, -1};
const int d8y[8] = {0, 0, 1, -1, 1, -1, 1, -1};
const int Trie_sz = 1e6;
#define get_bit(mask, x) ((mask)>>(x)&1)
const int LOG=19;

 
template<class X, class Y>
bool maximize(X& x, const Y y) {
    if (y > x) {x = y; return true;}
    return false;
}
 
template<class X, class Y>
bool minimize(X& x, const Y y) {
    if (y < x) {x = y; return true;}
    return false;
}
struct hocsinh{
    string mahs, hoten, gioitinh;
    int diemtoan, diemly, diemhoa;
};
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     //freopen("connect.inp", "r", stdin);
    // freopen("connect.out", "w", stdout);
    hocsinh a;
    cout << "Nhap thong tin hoc sinh: " << '\n';
    cout << "Ma hoc sinh: ";
    cin >> a.mahs;
    cout << "Ho va ten: ";
    cin >> a.hoten;
    cout << "Gioi tinh: ";
    cin >> a.gioitinh;
    cout << "Diem toan: ";
    cin >> a.diemtoan;
    cout << "Diem ly: ";
    cin >> a.diemly;
    cout << "Diem hoa: ";
    cin >> a.diemhoa;
    cout << "Ma hoc sinh: " << a.mahs << ", ho va ten: " << a.hoten << ", gioi tinh: "
    << a.gioitinh <<  ", diemtoan: " << a.diemtoan << ", diemly: " << a.diemly
    << ", diemhoa: " << a.diemhoa << ", diem trung binh: " << 1.0 * (a.diemtoan + a.diemly + a.diemhoa) / 3 << '\n';
    exit(0);
}
