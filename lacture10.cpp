#include<iostream>
using namespace std;

void printArr(int arr[],int length){

    for (int i = 0; i < length; i++)
    {
        cout <<arr[i] << " ";
    }
}

int main(){

    // sort this array this array only contain 0, 1 and 2
    int arr[9] = {0,2,2,0,0,0,0,0,0}; 

    int start = 0;
    int end = 8;


    // sort 0 and 2
    while (start < end)
    {

        while (arr[start] != 2 && start < end)
        {
            start++;
        }
        
        while (arr[end] == 2 && start < end)
        {
            end--;
        }

        
        swap(arr[start],arr[end]);
    }

    start = 0;
    end = end-1;
    // sort 0 and 1
    while (start < end)
    {
        while (arr[start] == 0 && start < end)
        {
            start++;
        }
        
        while (arr[end] == 1 && start < end)
        {
            end--;
        }

        swap(arr[start],arr[end]);
    }


    cout <<start << " " <<end << endl;;
    printArr(arr,9);
    
    
}
