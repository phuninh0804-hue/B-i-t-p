#include <iostream>
#include <cmath>
using namespace std;

bool sohoanhao (long long n) {
    if (n <= 1) return false;
    long long tong = 1;
    long long gioihan = (long long) sqrt((long double)n);
    for (long long i = 2; i <= gioihan; ++i) {
        if (n % i == 0) {
            long long d = n / i;
            tong += i;
            if (d != i) tong += d;
        }
    }
    return tong == n;
}

int main() {
    long long n;
    cout << "Nhap so nguyen duong n? ";
    if (!(cin >> n) || n <= 0) {
        cout << " nhap so nguyen duong\n";
        return 0;
    }
    if (sohoanhao(n)) cout << n << " la so hoan thien\n";
    else cout << n << " khong phai la so hoan thien\n";
    return 0;
}
