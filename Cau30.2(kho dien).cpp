#include <iostream>
#include <cmath>
using namespace std;

unsigned long long sohoanhao(int p) {
    return ((   1ULL  << (p - 1)) * ((  1ULL << p) - 1));// vì nếu chỉ nhập 1 thì máy sẽ nhầm thành int 1 có thể bị tràn số maybe:v
}


int main() {

     unsigned long long n;
    cout << "Nhap so nguyen duong n? ";
    if (!(cin >> n) || n <= 0) {
        cout << " nhap so nguyen duong\n";
        return 0;
    }
    cout << " Cac so hoan thien tu 1 tro len la "<< n << " la \n";
      int dayso[] = {2, 3, 5, 7, 13, 17, 19, 31};//theo wikipedia :))))))))

    bool sohoanhaotimduoc = false;
    for (int p : dayso) {
        unsigned long long so = sohoanhao(p);
        if (so <= n ) {
            cout << so << " ";
            sohoanhaotimduoc = true;
        }
    }

    return 0;
}
