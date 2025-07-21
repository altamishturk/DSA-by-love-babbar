#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void reverseAnArray(int arr[],int size,int s){

    int start = s;
    int end = size-1;

    while (start <= end)
    {
        swap(arr[start],arr[end]);

        start++;
        end--;
    }
    

    for (int i = 0; i < size; i++)
    {
        cout <<arr[i] << " ";
    }
    
}


void mergeSortedArray(vector<int> arr,vector<int> arr1){

    int j = 0;
    int remaningArrLength = arr.size();

    while (remaningArrLength > 0 && j < arr1.size())
    {
        if(arr1[j] < arr[0]){
            arr.push_back(arr1[j++]);
        }
        else {
            arr.push_back(arr[0]);
            arr.erase(arr.begin());
            remaningArrLength--;
        }
    }


    while (remaningArrLength > 0)
    {
        arr.push_back(arr[0]);
        arr.erase(arr.begin());
        remaningArrLength--;
    }

    while (j < arr1.size())
    {
        arr.push_back(arr1[j++]);
    }
    


    for (int i = 0; i < arr.size(); i++)
    {
        cout <<arr[i] << " ";
    }
}


void moveZeros(vector<int> arr){

    int noZero = 0;
   

    for (int j = 1; j < arr.size(); j++)
    {
        if(arr[j] != 0){
            swap(arr[j],arr[noZero]);
            noZero++;
        }
    }
    
    

    for (int i = 0; i < arr.size(); i++)
    {
        cout <<arr[i] << " ";
    }
    
}


int main(){

    // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // int s = 5;
    
    // reverseAnArray(arr,10,s);

    // vector<int> arr = {1,2,3,4,5,6,7,8,9};
    // vector<int> arr1 = {1,2,3};
    // mergeSortedArray(arr,arr1);

    vector<int> arr = {1,22,0,334,5,0,723,0,9,0};
    moveZeros(arr);
}