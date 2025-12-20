#include <bits/stdc++.h>
using namespace std;

int main(){
   int thang=0; cout << " Vui long nhap thang (nhap so) : " <<endl; cin >> thang;
   if(thang > 12 || thang < 1  ){
    cout<<"vui long nhap lai " <<endl;
    return 0;
   }
   if(thang == 1 || thang == 2 || thang ==3){
    cout<<"thang " << thang << " thuoc quy 1 trong nam"<<endl;
   }
if(thang == 4 || thang == 5 || thang ==6){
    cout<<"thang " << thang << " thuoc quy 2 trong nam"<< endl;

}
if(thang == 7 || thang== 8|| thang == 9){
    cout<< "thang " << thang << " thuoc quy 3 trong nam"<<endl;
}
if(thang ==10|| thang ==11|| thang ==12){
    cout<< "thang " << thang << " thuoc quy 4 trong nam"<<endl;
}
            return 0 ;
}
