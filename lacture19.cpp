#include <iostream>
using namespace std;


void printArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout <<arr[i] <<" ";
    }
}


void insersionShort(int arr[],int size){

    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];

        for (int j = i-1; j >= 0; j--)
        {
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else {
                arr[j+1] = temp;
                break;
            }
        }
         
    }
    
    printArr(arr,size);
}

int main(){
    int arr[12] = {2,5,3,1,8,4,435,45,346,346,23,234};

    insersionShort(arr,12);
}