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
    /*This approach involves prefix sum array.
    Let an array be of size 2---->[-1,2]
    one array ending at index 1([1]). Two array ending at index 2([-1],[-1,2])
    max sum of the array ending at 1 is -1
    max sum of the array ending at 2 is 1
    prefix_sum[1]=p[1]
    prefix_sum[2]=p[2]
    max_sum[2]=prefix_sum[2]-(min(p[1],p[0]))
    max_sum[i]=prefix_sum[i]-(min(p[0],p[1],p[2],....p[i-1]))
    maximum of all max_sum at i index will be the maximum sum of the sub_array
    */
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
