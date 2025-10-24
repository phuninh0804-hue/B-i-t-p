#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b ,c;
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
 cout << " Nhap he so c:";
 cin >> c ;
    if (a == 0) {
        if (b == 0) {
                if (c==0)
            cout << "Phuong trinh co vo so nghiem." << endl;
            else
                cout << " phuong trinh vo nghiem ";
        } else {
            cout << "Phuong trinh co nghiem x =" << -c/b << endl;
        }

    } else {
        double delta = b * b - 4 * a * c;
        if (delta < 0 ) {
            cout << " phuong trinh vo nghiem";
        } else if ( delta == 0) {
        cout << " phuong trinh co nghiem kep x " << -b/ (2* a );}
        else {double x1= (-b + sqrt( delta )) / (2 * a );
             double x2 = (-b - sqrt (delta )) / (2 * a );
            cout << " phuong trinh co nghiem phan biet ";
           cout << " x1 = " << x1 << endl;
        cout << " x2 =" << x2 << endl ;
        }


    }

    return 0;
}
