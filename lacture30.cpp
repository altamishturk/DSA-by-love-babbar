
#include <iostream>
using namespace std;

#define PI 3.14


inline int add(int a, int b){
    return a+b;
}

void printA(int a = 100){
    cout <<a;
}

int main(){


    // // Macro
    // // A macro is a piece of code defined using #define that gets replaced before compilation (during preprocessing).
    // cout <<PI;

    // // inline function 
    // // An inline function is a function for which the compiler replaces the function call with the actual code of the function during compilation.
    // int ans = add(1,2);

    // cout <<ans;


    // // Default Arguments
    // // Default arguments in C++ are values provided in a function declaration that are used if the caller does not supply them.
    // int a = 10;
    // printA(a);

    // // print a will print value provided if not provided it will print 100 because thats a defaut arg

    return 0;
}