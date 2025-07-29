#include <iostream>
using namespace std;


bool isSorted(int arr[],int size){

    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else {
        return isSorted(arr+1,size-1);
    }

}

int sumOfArray(int arr[],int size){

    if(size == 0){
        return 0;
    }

    return arr[0] + sumOfArray(arr+1,size-1);
}


int main(){


    int arr[5] = {1,2,3,4,5};

    // bool ans = isSorted(arr,5);

    // if(ans){
    //     cout <<"Array is Sorted";
    // }
    // else {
    //     cout <<"Array is not Sorted";
    // }


    cout <<sumOfArray(arr,5);

    return 0;
}