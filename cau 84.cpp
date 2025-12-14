#include <bits/stdc++.h>
using namespace std;
int main(){
   int a =0 ;cout << "nhap a?"<< endl; cin >> a;
   int b =0 ; cout << "nhap b?"<<endl; cin >> b;
   int x =0 ;
   if( a!=0){
    x= -b/ 2 *a;
    cout<<"Pt co mot nghiem " << x <<endl;


   }
   if(a==0 && b ==0){
   cout<< "Pt co vo so nghiem"<<endl;

   }
   if(a==0 && b!=0){
    cout << "Pt vo nghiem"<<endl;
   }
    return 0 ;
}
