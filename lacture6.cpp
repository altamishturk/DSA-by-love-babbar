#include<iostream>
#include<cmath>
using namespace std;


int power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}


int onesComplement(int num, int bitSize) {
    // Create a bitmask of n 1's using shift
    int mask = (1 << bitSize) - 1;
    return (~num) & mask;
}


int main(){

    // // convert positive number to binary into binary 
    // int num = 15;
    // int ans = 0;
    // int i = 0;

    // while (num != 0)
    // {
    //     int bit = num & 1; 

    //     ans = (bit * power(10,i)) + ans;

    //     // cout <<ans<<endl;
        
    //     num = num >> 1;
    //     i++;
    // }
    
    // cout <<ans;


    // convert negative number into binary 
    
    int num = -10;
    int posNum = fabs(num);
    int i = 0;
    int ans = 0;

    while (posNum != 0)
    {
        int bit = posNum&1;
        ans = (bit*power(10,i))+ans;
        posNum = posNum>>1;
        i++;
    }

    string onsCompliment = "";
    int carry = 1;

    while (ans != 0)
    {
        int digit = ans%10;
        
        if(carry == 1){
            if(carry || digit){
                onsCompliment.append("1");
            }
            else {
                onsCompliment.append("0");
            }

            if(carry && digit){
                carry = 1;
            }
            else {
                carry = 0;
            }
        }
        else {
            onsCompliment.append(to_string(digit));
        }
        ans = ans/10;
    }
    

    // cout <<ans;
    cout <<onsCompliment;


    // // binary to devimal 

    // int num = 1111;
    // int i = 0;
    // int ans = 0;

    // while (num != 0)
    // {
    //     int lastDigit = num%10;

    //     // cout<<bit;

    //     if(lastDigit == 1){
    //         ans = ans + power(2,i);
    //     }

    //     num = num/10;
    //     i++;
    // }
    
    // cout <<ans;
    
}


