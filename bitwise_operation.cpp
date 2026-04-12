#include <bits/stdc++.h>
using namespace std;
int check_kth_bit (int n, int k){
    return ((n >> k) & 1);
    /*moves kth bit t the least significant  bit position. if k is 2 it will be shifted to 0th position. 2-->1--->0.
    then we perform bitwise and with 1. if the kth bit is 1 then the reuslt will be 1, if the kth bit is 0 then the result is 0.
    */  
}
//check if the kth bit of n is on (1) or off (0). k is 0-indexed from the rightmost bit.
void print_on_bits(int x){
    for(int i=0; i<32; i++){
        if(check_kth_bit(x, i)){
            cout << i << " "; //prints the positions of the set bit.
        }
    }
    cout << '\n';
}
//prints the count of set bits in the binary representation of x.
int count_set_bits(int x){
    int count=0;
    for(int i=0; i<32; i++){
        if(check_kth_bit(x, i)){
            count++;
        }
    }
    return count;
}
bool is_even(int x){
    return (x&1)==0; // checks if the least significant bit of x is 0. If it is 0, then x is even, otherwise it is odd.
}
int set_kth_bit(int n,int k){
    return n|(1<<k); ;
}
int unset_kth_bit(int n,int k){
    return n & (~(1<<k)); //sets the kth bit of n=0. if kth bit of n is 0 then 0 & 0=0, if kth bit of n is 1 then 1 & 0=0 also. So the kth bit of n is set to 0.
}
int toggle_kth_bit(int n,int k){
    return n^(1<<k); // toggles the kth bit of n. if kth bit of n is 0 then 0 ^ 1=1, if kth bit of n is 1 then 1 ^ 1=0. So the kth bit of n is toggled.
}
bool power_of_two(int x){
    return  count_set_bits(x)==1; // checks if x is a power of 2. A number that is a power of 2 has exactly one set bit in its binary representation. 
}
int main(){
    //bitwise and
    int and_result=12 & 25 ; // 12 in binary is 1100 and 25 in binary is 11001. result is 8 (01000)
    cout<<"and_result: "<<and_result<<'\n';  //8

    // bitwise or
    int or_result=12 | 25 ; // 12 in binary is 1100 and 25 in binary is 11001. result is 29 (11101)
    cout<<"or_result: "<<or_result<<'\n';  //29

    //bitwise xor
    int xor_result=12 ^ 25 ; // 12 in binary is 1100 and 25 in binary is 11001. result is 21 (10101). Output is 1 if there is exactly one 1 in the input combination.
    cout<<"xor_result: "<<xor_result<<'\n';  //21

    //bitwise not
    int not_result=~12 ; // 12 in binary is 1100. result is -13 (in two's complement, ~12 is -13). complement of n is -(n+1)
    cout<<"not_result: "<<not_result<<'\n';  //-13

    //left shift (<<)
    int left_shift= 3 << 2 ; // 3 in binary is 11. left shift by 2 positions results in 12 (1100). shifting k bits in number x= x * 2^k.
    cout<<"left_shift: "<<left_shift<<'\n';  //12

    //right shift (>>)
    int right_shift= 12 >> 2 ; // 12 in binary is 1100. right shift by 2 positions results in 3 (11). shifting k bits in number x= x / 2^k.
    cout<<"right_shift: "<<right_shift<<'\n';  //3

    // difference between 1 << x and 1ll << x;
    int x=31;
    long long res=1 << x; // 1 is an int, so this will be an int shift. If x is 31, this will cause overflow and result in undefined behavior.
    long long res_ll=1ll << x; // 1ll is a long long, so this will be a long long shift. This will correctly compute 2^31 without overflow.
    cout << "result of (1 << x): " << res << '\n'; // undefined behavior, may not give correct result
    cout << "result of (1ll << x): " << res_ll << '\n'; // correct result

    int y=11 ; //binary is (1011);
    cout << "check if the 2nd bit of y is on or off: " << check_kth_bit(y, 2) << '\n'; // checks if the 2nd bit (0-indexed) of y is on (1) or off (0). In this case, the 2nd bit of 11 (1011) is 0, so it will return 0.
    cout << "positions of set bits in y: ";
    print_on_bits(y); // prints the positions of the set bits in y. For 11 (1011), the set bits are at positions 0, 1, and 3 (0-indexed from the rightmost bit).
    cout << "count of set bits in y: " << count_set_bits(y) << '\n'; // counts the number of set bits in y. For 11 (1011), there are 3 set bits.
    cout << "is y even? " << is_even(y) << '\n'; // checks if y is even. For 11 (1011), the least significant bit is 1, so it will return false (0).
    cout << "setting the 1st bit of y: " << set_kth_bit(y, 1) << '\n'; // sets the 1st bit of y to 1. For 11 (1011), the 1st bit is already 1, so it will remain 11 (1011).
    cout << "unsetting the 1st bit of y: " << unset_kth_bit(y, 1) << '\n'; // unsets the 1st bit of y to 0. For 11 (1011), unsetting the 1st bit will result in 9 (1001).
    cout << "toggling the 1st bit of y: " << toggle_kth_bit(y, 1) << '\n'; // toggles the 1st bit of y. For 11 (1011), toggling the 1st bit will result in 9 (1001).
    cout << "is y a power of 2? " << power_of_two(y) << '\n'; // checks if y is a power of 2. For 11 (1011), there are 3 set bits, so it will return false (0).
     return 0;
}