#include <iostream>
using namespace std;



void findFirstAndLastOccuranceOfNumber(int arr[],int size,int target){

    int firstOcc = -1;
    
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    while (start <= end)
    {

        if(arr[mid] == target && arr[mid-1] != target){
            firstOcc =  mid;
        }
        
        if(arr[mid] < target){
            start = mid+1;
        }
        else {
            end = mid-1;
        }

        mid = start + (end - start)/2;
    }
    

    int lastOcc = -1;


    start = 0;
    end = size-1;
    mid = start + (end - start)/2;

    while (start <= end)
    {

        if(arr[mid] == target && arr[mid+1] != target){
            lastOcc =  mid;
        }
        
        if(arr[mid] < target || arr[mid+1] == target){
            start = mid+1;
        }
        else {
            end = mid-1;
        }

        mid = start + (end - start)/2;
    }

    cout <<firstOcc << " " << lastOcc << endl;
}


int findPeakElementInMountainArr(int arr[],int size){
    int s = 0;
    int e = size-1;
    int m = s + (e-s)/2;

    while (s < e)
    {
        if(arr[m] < arr[m+1]){
            s = m+1;
        }
        else {
            e = m;
        }

        m = s + (e-s)/2;
    }
    
    return m;
}

int main(){

    int arr[10] = {1,2,3,4,7,6,5,4,3,1};
    int arr1[11] = {1,2,3,4,5,6,7,8,9,10,11};
    
    // findFirstAndLastOccuranceOfNumber(arr,10,6);
    cout <<findPeakElementInMountainArr(arr,10);

}