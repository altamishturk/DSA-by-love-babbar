#include <iostream>
using namespace std;

void printArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout <<arr[i] <<" ";
    }
}

void selectionShort(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        int min = i;

        for (int j = i+1; j < size; j++)
        {
            if(arr[min] > arr[j]){
                min  = j;
            }

            if(j == (size-1)){
                swap(arr[min],arr[i]);
            }
        }
        
    }
    
    printArr(arr,size);
}

int main(){
    int arr[10] = {1,2,21,65,234,7,456,67,8,7};

    selectionShort(arr,10);
    
}