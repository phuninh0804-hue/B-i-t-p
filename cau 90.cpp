#include <bits/stdc++.h>
using namespace std;


int main() {
long long N=0; cout << "Nhap N ? \n" <<endl; cin >> N ;
long long m = 0 ; long long tong = 0 ;
while (tong + m + 1 < N){
    m++;
    tong+=m;
}
cout << "So nguyen duong m lon nhat de tong < N la " << m << endl;
    return 0;
}
