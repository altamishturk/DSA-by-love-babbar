
#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int &b = a; // this is refrence variabe 

    b = 20;

    cout <<a <<endl;
    cout <<b <<endl;

    return 0;
}