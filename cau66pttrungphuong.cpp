#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    cout << "Nhap he so c: ";
    cin >> c;

    if (a == 0) {
        cout << " khong phai phuong trinh bac 4 ." << endl;
        return 0;
    }

    double delta = b * b - 4 * a * c;
    cout << "Delta = " << delta << endl;

    if (delta < 0) {
        cout << "Phuong trinh vo nghiem." << endl;
    } else {
        double y1 = (-b + sqrt(delta)) / (2 * a);
        double y2 = (-b - sqrt(delta)) / (2 * a);

        cout << fixed << setprecision(3);

        if (y1 >= 0) {
            cout << "t1 = " << y1 << endl;
            cout << "=> x1 = " << sqrt(y1) << ", x2 = " << -sqrt(y1) << endl;
        }

        if (y2 >= 0 && delta != 0) {
            cout << "t2 = " << y2 << endl;
            cout << "=> x3 = " << sqrt(y2) << ", x4 = " << -sqrt(y2) << endl;
        }
        if (y1 < 0 && y2 < 0) {
            cout << "Phuong trinh vo nghiem thuc." << endl;
        }
    }

    return 0;
}
