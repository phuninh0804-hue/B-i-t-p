#include <bits/stdc++.h>
using namespace std;
int main (){
 int n  = 0 ; cout << "Nhap so can doc" <<endl; cin >> n;
 if( n <100 || n >=1000 || n < 0){
    cout << "Vui long nhap so co ba chu so" <<endl;
    return 0 ;
 }
 int tram = n/100;
 int chuc= n%100 / 10 ;
 int donvi= n%100 %10;
 if(tram ==1) cout <<" mot tram ";
 else if (tram ==2) cout << " hai tram ";
 else if (tram ==3) cout << " ba tram ";
 else if (tram ==4) cout << " bon tram";
 else if (tram ==5) cout << " nam tram ";
 else if (tram ==6) cout << "sau tram";
 else if (tram == 7) cout <<" bay tram ";
 else if (tram == 8) cout <<" tam tram";
 else if ( tram ==9) cout <<" chin tram";
 if(chuc !=0){
        cout << " ";
 if( chuc ==1) cout <<" muoi ";
 else if ( chuc ==2) cout << " hai muoi ";
 else if ( chuc == 3) cout << " ba muoi ";
 else if ( chuc == 4) cout << " bon muoi";
 else if (chuc ==5) cout << "nam muoi";
 else if ( chuc == 6) cout << " sau muoi ";
 else if ( chuc ==7) cout << " bay muoi ";
 else if ( chuc == 8) cout <<" tam muoi ";
 else if (chuc == 9) cout << " chin muoi ";
 }

 if(donvi !=0){
        cout << " " ;
    if(donvi ==1 && chuc != 1) cout << " mot ";
else if(donvi ==1) cout << " mot ";
else if (donvi ==2) cout <<" hai ";
else if (donvi ==3) cout <<" ba ";
else if (donvi ==4) cout <<" bon ";
else if (donvi==5)   cout <<"lam";
else if (donvi==6) cout <<" sau ";
else if (donvi==7) cout <<" bay ";
else if (donvi ==8) cout <<" tam ";
else if (donvi ==9) cout <<" chin ";

 }
return 0 ;
}
