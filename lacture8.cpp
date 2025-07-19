#include<iostream>
using namespace std;

int ap(int n){
    return ((3*n)+7);
}

int numberOfSetBits(int a,int b){

    int setBits = 0;

    while (a != 0 && b != 0)
    {
        int bita = a&1;
        int bitb = b&1;
        
        // cout <<bit<<endl;

        if(bita == 1){
            setBits += 1;
        }
        if(bitb == 1){
            setBits += 1;
        }
        
        a = a >> 1;
        b = b >> 1;
    }
    
    return setBits;
}


int fib(int n){


    int prev = 0;
    int curr = 1;

    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }

    for (int i = 3; i <= n; i++)
    {
        int temp = prev;
        prev = curr;
        curr = temp + curr;
    }
    
    return curr;
}

int main(){
    

    //// take a intiger and gives you how maney notes and their value are required for that
    // int num;

    // cout <<"Enter A Number" <<endl;
    // cin >>num;
    
    // int note = 500;
    
    // while (num != 0)
    // {
    //     switch (note)
    //     {
    //     case 500:
    //         {
    //             if(num >= 500){
    //                 int notes = num/500;
    //                 cout <<"500 ke " <<notes << " Notes" <<endl;
    //                 num = num%500;
    //             }
    //             note = 200;
    //         }
    //         break;
    //     case 200:
    //         {
    //             if(num >= 200){
    //                 int notes = num/200;
    //                 cout <<"200 ke " <<notes << " Notes" <<endl;
    //                 num = num%200;
    //             }
    //             note = 100;
    //         }
    //         break;
    //     case 100:
    //         {
    //             if(num >= 100){
    //                 int notes = num/100;
    //                 cout <<"100 ke " <<notes << " Notes" <<endl;
    //                 num = num%100;
    //             }
    //             note = 50;
    //         }
    //         break;
    //     case 50:
    //         {
    //             if(num >= 50){
    //                 int notes = num/50;
    //                 cout <<"50 ke " <<notes << " Notes" <<endl;
    //                 num = num%50;
    //             }
    //             note = 20;
    //         }
    //         break;
    //     case 20:
    //         {
    //             if(num >= 20){
    //                 int notes = num/20;
    //                 cout <<"20 ke " <<notes << " Notes" <<endl;
    //                 num = num%20;
    //             }
    //             note = 10;
    //         }
    //         break;
    //     case 10:
    //         {
    //              if(num >= 10){
    //                 int notes = num/10;
    //                 cout <<"10 ke " <<notes << " Notes" <<endl;
    //                 num = num%10;
    //             }
    //             note = 5;
    //         }
    //         break;
    //     case 5:
    //         {
    //             if(num >= 5){
    //                 int notes = num/5;
    //                 cout <<"5 ke " <<notes << " Notes" <<endl;
    //                 num = num%5;
    //             }
    //             note = 2;
    //         }
    //         break;
    //     case 2:
    //         {
    //             if(num >= 2){
    //                 int notes = num/2;
    //                 cout <<"2 ke " <<notes << " Notes" <<endl;
    //                 num = num%5;
    //             }
    //             note = 1;
    //         }
    //         break;
    //     case 1:
    //         {
    //             if(num >= 1){
    //                 int notes = num/1;
    //                 cout <<"1 ke " <<notes << " Notes" <<endl;
    //                 num = num%1;
    //             }
    //             note = 0;
    //         }
    //         break;
    //     default:
    //         {
    //             num = 0;
    //             note = 0;
    //         }
    //         break;
    //     }
    // }
    

    // int a , b;

    // cout <<"enter value of a " <<endl;
    // cin >> a;
    // cout <<"enter value of b " <<endl;
    // cin >> b;
    
    // // cout <<ap(3);
    // // numberOfSetBits(a,b);
    // cout <<"set bits are " <<numberOfSetBits(a,b);


    int n;

    cout <<"Please Enter Value of n" <<endl;

    cin >> n;

    cout <<n <<"th fib is " << fib(n);
}