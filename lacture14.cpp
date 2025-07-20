#include <iostream>
using namespace std;


// povet is the smallest element in the rotated shorted array 
int findPovetElement(int arr[],int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    while (start < end)
    {
        if(arr[0] < arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid;
        }
    

        mid = start + (end - start)/2;
    }
    
    return mid;
}


int binarySearch(int arr[],int start,int end,int target){

    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if(arr[mid] == target){
            return mid;
        }

        if(arr[mid] < target){
            start = mid+1;
        }
        else {
            end = mid-1;
        }

        mid = start + (end - start)/2;
    }
    
    return -1;
}

int findInRotatedSorted(int arr[],int size,int target){
    
    int minIndex = findPovetElement(arr,size);
    int index = -1;
    
    if(target >= arr[minIndex] && target <= arr[size-1]){
        index = binarySearch(arr,minIndex,size-1,target);
    }
    else {
        index = binarySearch(arr,0,minIndex-1,target);
    }

    return index;
}

int main(){
    int arr[6] = {4,5,6,1,2,3};

    // cout <<findPovetElement(arr,6);
    cout <<findInRotatedSorted(arr,6,2);
}