#include <bits/stdc++.h>
using namespace std;

int main(){
double a = 0 ; cout << " Nhap so thuc a" <<endl; cin >> a;
double b=0 ; cout << "Nhap so thuc b"<<endl; cin >>b;
double c=0 ; cout << "Nhap so thuc c" <<endl; cin >> c ;
if (a>b){ swap ( a,b);};
if (b>c){swap(b,c);};
if ( a > b ){swap(a,b);};
cout << "Cac so thuc theo thu tu tang dan la" <<endl;
cout << a << "  " << b <<"  "<< c << "  "<<endl;
    return 0;
}
