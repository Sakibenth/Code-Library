#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    long long max_sum=-10e9;
    long long min_p_sum=0;
    long long prefix_sum=0;
    for(int i=0;i<n;i++){
        long long end_sum=0;
        prefix_sum+=a[i];
        end_sum=prefix_sum-min_p_sum;
        max_sum=max(end_sum,max_sum);
        min_p_sum=min(prefix_sum,min_p_sum);
    }
    cout << max_sum << '\n';
    return 0;
}
