#include <bits/stdc++.h>
using namespace std;
string dec_to_bin(int n){
    if(n==0){
        return "0";
    }
    string s="";
    while(n>0){
        s=char('0'+(n%2))+s;
        n/=2;
    }
    return s;
}
int main(){
    int n;
    cin >> n;
    cout << dec_to_bin(n) <<'\n';
    return 0;
}