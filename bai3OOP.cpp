#include<bits/stdc++.h>
#include <chrono>
using namespace std;
#define int long long
const int INF = numeric_limits<int>::max();
const int nax = (int)(205);
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
struct Matrix {
    int m[nax][nax];
    Matrix() {
        for (int i = 0; i < nax; ++i) {
            for (int j = 0; j < nax; ++j) {
                m[i][j] = 0;
            }
        }
    }
};

Matrix operator+ (Matrix a, Matrix b) {
    Matrix res;
    for (int i = 0; i < nax; ++i) {
        for (int j = 0; j < nax; ++j) {
            res.m[i][j] = a.m[i][j] + b.m[i][j];
        }
    }
    return res;
}

Matrix operator- (Matrix a, Matrix b) {
    Matrix res;
    for (int i = 0; i < nax; ++i) {
        for (int j = 0; j < nax; ++j) {
            res.c[i][j] = a.m[i][j] - b.m[i][j];
        }
    }
    return res;
}

Matrix operator* (Matrix a, Matrix b) {
    Matrix res;
    for (int i = 0; i < nax; ++i) {
        for (int j = 0; j < nax; ++j) {
            res.c[i][j] = 0;
            for (int k = 0; k < nax; ++k) {
                res.c[i][j] += a.m[i][k] * b.m[k][j];
            }
        }
    }
    return res;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     //freopen("connect.inp", "r", stdin);
    // freopen("connect.out", "w", stdout);
    int n;
    cin >> n;
    Matrix a, b;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a.m[i][j];
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> b.m[i][j];
        }
    }
    Matrix ans = a + b;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << ans.m[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
    ans = a - b;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << ans.m[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
    ans = a * b;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << ans.m[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
    exit(0);
}
    
