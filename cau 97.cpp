#include <bits/stdc++.h>
using namespace std;

int main(){
int a = 0; int b =0 ; int c =0;
cout << " Nhap 3 canh cua tam giac lan luot la " <<endl;
cin >> a  ; cin >> b ; cin >> c;
if ( a < 0|| b < 0 || c <0){
    cout << "Vui long nhap lai " << endl;
    return 0;
}
if( a > b ){ swap(a,b);}
    if( b > c ) {swap ( b,c);}
    if(a > b){swap(a,b);}
    if ( a+b > c){
      if(a==b==c){
        cout << " Tam giac nay la tam giac deu" <<endl;
        }
     else if(a*a + b*b == c*c){
            cout << " tam giac nay la tam vuong"<<endl;
        }
      else if ( a==b){
        cout << " tam giac nay la tam giac can" <<endl;
      }
        else{
        cout << " Tam giac nay la tam giac binh thuong "<<endl;}
    }
    else{
        cout << " 3 canh nay khong the tao ra mot tam giac"<<endl;
    }
    return 0;
}
