#include <iostream>
using namespace std;


int binarySearch(int arr[],int size,int target){

    int start = 0;
    int end = size-1;
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




int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr1[11] = {1,2,3,4,5,6,7,8,9,10,11};
    
    int ans = binarySearch(arr,10,45);
    int ans1 = binarySearch(arr1,11,45611);

    cout <<"ans is " << ans <<endl;
    cout <<"ans is " << ans1 <<endl;
}