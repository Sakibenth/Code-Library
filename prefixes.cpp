#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s="abcde";
    int n=s.size();
    //print all prefixes of the string including the empty string and the string itself.
    for(int k=0;k<=n;k++){
        cout << s.substr(0,k) << endl;
    }
    // printing all the suffixes of the string including the empty string and the string itself.
    for(int k=0;k<=n;k++){
        cout << s.substr(n-k,k) <<endl;
    }
    return 0;
}