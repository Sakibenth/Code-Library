#include <bits/stdc++.h>
using namespace std;
int bin_to_dec(string s){
   int length=s.size();
   int dec=0;
   for(int i=s.size()-1;i>=0;i--){
    if(s[i]=='1'){
        dec+=(1*pow(2,s.size()-1-i));
    }
    else{
        continue;
    }
   }
   return dec;
}
int main(){
    string s;
    cin >> s;
    cout << bin_to_dec(s) <<'\n';
    return 0;
}