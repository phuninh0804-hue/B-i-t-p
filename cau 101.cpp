#include <bits/stdc++.h>
using namespace std;

int main(){
int thang = 0; cout << " Nhap thang  ?" <<endl; cin >> thang ;
int nam = 0; cout << " Nhap nam ?"<<endl;cin >> nam;
if( thang < 0 ||  thang > 12 ){
    cout << " Vui long nhap lai thang" ;
}
bool namnhuan = (nam%400 == 0 || nam % 4 ==0 && nam % 100 != 0);
if(thang == 2){if(namnhuan){
    cout << " thang nay co " << 29 <<"Ngay"<<endl;
}
 else {cout << "thang nay co " << 28 <<"ngay"<<endl;}
}
else if (thang == 3 || thang == 5 || thang ==9 || thang == 11  ){
    cout << "Thang nay co " << 31 << "ngay" << endl;
}else {cout << "thang nay co " << 30 <<" ngay " << endl;}

    return 0;
}
