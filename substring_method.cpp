#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s="abcde";
    cout << s.substr(1,3) << endl; // Output: "bcd"
    cout << s.substr(0,2) << endl; // Output: "ab"
    cout << s.substr(5,6)<< endl;  // if pos is equal to the string size, the returned substring is empty. Output: ""
    cout << s.substr(1,5) << endl; //if requested substring length exceeds the string length, then the returned substring is [pos,s.size()).] output : "bcde"
    cout << s.substr(1,100) << endl; // if the requested substring is too long, it will return [pos, s.size()). Output: "bcde"
    cout<<  s.substr(1)<< endl;
    try {
        cout << s.substr(7, 1) << '\n'; // throws
    } catch (const out_of_range& e) {
        cout << "out_of_range thrown\n";
    }
    cout << s.substr(0, 0) << endl; // Output: "" length is 0, so it returns an empty string.
    return 0;
}