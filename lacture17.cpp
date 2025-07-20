#include <iostream>
using namespace std;


void printArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout <<arr[i] <<" ";
    }
}


void bubbleShort(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            if(arr[j] < arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
        
    }
    
    printArr(arr,size);
}

int main(){
    int arr[10] = {1,2,21,65,234,7,456,67,8,7};

    bubbleShort(arr,10);
    
}