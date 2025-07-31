#include <iostream>
using namespace std;

int main(){

    // int num = 10;
    // int num1 = 10;

    // int* p = &num;

    // // cout <<*p <<endl;
    // // cout <<p <<endl;
    
    // *p = 20;
    
    // cout << *p <<endl;
    // cout << p <<endl;


    // int* ptr = nullptr;

    // cout <<"address " <<ptr <<endl;
    // cout <<"value " <<*ptr <<endl;


    ////Pointer to Pointer (Double Pointers)
    // int a = 10;
    // int b = 20;

    // int* ptr1 = &a;

    // int** ptr2 = &ptr1;

    // cout << *ptr1 <<endl;
    // cout << **ptr2;


    //// Pointers and Arrays
    // int arr[3] = {10,20,30};

    // int* p = arr;


    // cout << p <<endl;
    // cout << *(p+2);

    // int arr[3] = {10, 20, 30};
    // int* p = arr;

    // cout << *(p++); // prints 10, moves to next


    // // Dynamic Memory (Heap Allocation)

    // int* p = new int; // dynamically allocated memory

    // *p = 50;

    // delete p; // free memory


    // int* p1 = new int[2];

    // p1[0] = 10;
    // p1[1] = 20;

    // delete[] p1;
    // cout <<*(p1+1);
    


    int rows = 3, cols = 4;
    int** matrix = new int*[rows];     // Create array of pointers

    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];    // Each row is a dynamic array
    }

    // Set values
    matrix[1][2] = 99;

    cout <<matrix[1][2];

    // Free memory
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}