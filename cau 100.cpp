#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b ,c;
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    cout<< "Nhap he so c: "; cin >> c;
double delta ;
    if(a==0){if (b==0){if(c==0){
        cout<< "phuong trinh co vo so nghiem"<<endl;}
    else {cout << " phuong trinh vo nghiem";}
    }else{cout << "phuong trinh co 1 nghiem   x = " << -c/b<<endl;
    }
    }else{delta = b*b - 4 *a *c;
    if(fabs(delta) <1e-9){
        cout << "Phuong trinh vo nghiem" <<endl;}
   else if(delta==0){
        cout << "Phuong trinh co nghiem kep  x = "<< -b/(2*a);}
        else{double x1 = (-b + sqrt(delta))/(2*a);
            double x2 = (-b - sqrt(delta))/(2*a);
            cout << "Phuong trinh co nghiem 2 phan biet   x1 = " <<x1 << "; x2 = " <<x2<<endl;
        }


    }

    return 0;
}
