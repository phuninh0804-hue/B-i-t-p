#include <bits/stdc++.h>
using namespace std;

int main(){
    double a = 0; cout << " Nhap he so a" <<endl;cin >> a;
    double b = 0; cout << " Nhap he so b" <<endl;cin >> b ;
    double c = 0; cout << " Nhap he so c" <<endl;cin >> c ;
    double d =0;cout << " Nhap he so d" <<endl;cin >> d;
    double e =0;cout << " Nhap he so e" <<endl;cin >> e ;
    double f=0;cout << " Nhap he so f" <<endl;cin >> f;
    double dinhthuc= a*e - b*d;
    double dinhthucx= (c*e - b *f);
    double dinhthucy =(a*f - c*d);
    if(dinhthuc !=0){
            double x =(c*e - b *f)/dinhthuc;
            double y = ( a *f - c *d)/dinhthuc;
        cout << " he phuong trinh co mot nghiem duy nhat (" << x << " , " << y <<")" <<endl;
    }
    else{if(dinhthucx == 0 && dinhthucy ==0){
        cout << " he phuong trinh co vo so nghiem " <<endl;}
        else{ cout << "he phuong trinh vo nghiem" <<endl;}}


    return 0;
}
