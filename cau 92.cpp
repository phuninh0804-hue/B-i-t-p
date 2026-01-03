#include <bits/stdc++.h>

using namespace std;


int main() {
 long long a = 0 ; cout << " Nhap so a" <<endl; cin >> a;
 long long b = 0 ; cout << "Nhap so b"<<endl; cin >> b;
 long long uc=0;
if ( a < b ){
    swap(a,b);
}
    long long giatribandaucuaa=a;long long giatribandaucuab=b;
    while (b!=0){
            uc=a%b;
            a=b;
            b=uc;

    }
cout <<"ucln cua (" << giatribandaucuaa <<  " , " << giatribandaucuab <<") la " << a<<endl;


    return 0;
}
