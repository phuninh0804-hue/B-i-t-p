#include <bits/stdc++.h>
using namespace std;
int main (){
 int n  = 0 ; cout << "Nhap so can doc" <<endl; cin >> n;
 if( n <10 || n >=100 || n < 0){
    cout << "Vui long nhap so co hai chu so" <<endl;
    return 0 ;
 }
 int chuc= n/10;
 int donvi= n%10;
 if( chuc ==1) cout <<" muoi ";
 else if ( chuc ==2) cout << " hai muoi ";
 else if ( chuc == 3) cout << " ba muoi ";
 else if ( chuc == 4) cout << " bon muoi";
 else if (chuc ==5) cout << "nam muoi";
 else if ( chuc == 6) cout << " sau muoi ";
 else if ( chuc ==7) cout << " bay muoi ";
 else if ( chuc == 8) cout <<" tam muoi ";
 else if (chuc == 9) cout << " chin muoi ";


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
