#include <bits/stdc++.h>
using namespace std;
bool power_of_two(int n){
    if(n==0){
        return 0;
    }
    if((n & n-1)==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cin >> n;
    cout << power_of_two(n) << '\n';
    return 0;
}
