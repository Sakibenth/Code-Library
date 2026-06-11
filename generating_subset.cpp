#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s="abc";
    int n=s.size();
    //print all subsets of the string including the empty string and the string itself.
    for(int mask=0;mask<(1<<n);mask++){
        string subset="";
        for(int i=0;i<n;i++){
            if(mask & (1<<i)){
                subset+=s[i];
            }
        }
        cout << subset << endl;
    }
}