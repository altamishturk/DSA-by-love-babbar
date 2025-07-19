#include<iostream>
using namespace std;




int main(){

    // int num;
    // cout <<"Please Enter the value of num" <<endl;
    // cin >>num;

    // int ans = 0;

    // while (num != 0)
    // {
    //     int digit = num%10;
    //     ans = (ans * 10) + digit;
    //     cout <<ans;
    //     num = num/10;

    //     if(ans < INT32_MIN || ans > INT32_MAX){
    //         return 0;
    //     }
    // }





    int num;
    cout <<"Please Enter the value of num" <<endl;
    cin >>num;

    int max = 0;
    int temp = num;

    while (temp != 0)
    {
        max = (max << 1) | 1;
        temp = temp >> 1;
    }

    
    cout <<((~num) & max);

}