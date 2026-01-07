#include <bits/stdc++.h>
using namespace std;
int main (){ int ngaythang[] = {31,28,31,30,31,30,31,31,30,31,30,31};
int ngay = 0; cout << "Ngay" <<endl; cin >>ngay;
int thang = 0 ; cout << "Thang ?" <<endl; cin >> thang;
int nam = 0 ; cout << "Nam? " <<endl; cin >> nam;
if (nam %400==0 || nam % 4==0 && nam %100!=0)
    { ngaythang[1] = 29; }
     if(ngay > 1){
        ngay--;
     }else{
         thang--;
         if(thang ==0){
            thang = 12;
            nam --;
         }
         ngay=ngaythang[thang-1];
     }
     cout << " ngay " << ngay << " thang " << thang << " nam " << nam;
     return 0;
}
