#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("custom_input.txt","r",stdin);
    freopen("custom_output.txt","w",stdout);
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout << sum << endl;
    return 0;
}