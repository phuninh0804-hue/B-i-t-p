#include <bits/stdc++.h>
using namespace std;
bool  songuyento(long long n){
    if(n < 2 ){
        return false;
    }

for(long long i = 2 ; i*i <= n ; i++){
        if( n % i == 0){
            return false ;
        }
    return true;
}
}
int main(){
 long long n=0; cout << " Nhap so n \n"<<endl;  cin >> n;
 if(songuyento(n)){
    cout << n << " la so nguyen to"<<endl;

 }
 else {
    cout << n << " La hop so " <<endl;
 }
    return 0;
}
