#include <bits/stdc++.h>
using namespace std;

int main() {
int n ; cout << " nhap so nguyen n \n"; cin >> n ;
int maxluythua3 =  (int) pow(3 , 19);
if ( n > 0 && maxluythua3 % n ==0 ) {
    cout << "so nguyen n la co dang 3k"<< endl;

}
else {
        cout<<" khong phai la so co dang 3k" <<endl;
}
    return 0;
}
