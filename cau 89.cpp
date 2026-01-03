#include <bits/stdc++.h>
using namespace std;


int main() {
    long long N  = 0; cout << "Nhap N" <<endl; cin >> N;
    long long tong =0;


    if(N <= 1){
        cout << "vui long nhap lai "<< endl;
        return 0;
    }
for(long long  i = 1 ; i < N ; i+=2){
    tong+=i;
}

cout << "tong cac gia tri le nho hon N la " << tong << endl;
    return 0;
}
