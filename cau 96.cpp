#include <bits/stdc++.h>
using namespace std;

int main(){
    double x = 0 ; cout << " Nhap he so x?  " << endl; cin >> x ;
    double ketqua = 0;
    if (x < 5){
        ketqua  =  -2*x*x + 4*x -9;
        cout << "Ket qua"  <<ketqua<<endl;;
    }
    else {
        ketqua =    2*x*x+5*x +9;
        cout << "Ket qua" << ketqua<<endl;
          }

    return 0;
}
