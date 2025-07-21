#include <iostream>
#include <vector>
using namespace std;


void rotateArrByK(int arr[],int size,int k){

    vector<int> temp(size);

    for (int i = 0; i < size; i++)
    {
        temp[(i+k)%size] = arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        // cout <<temp[i] <<" ";
    }
}



bool ifArraySortedAndRoated(int arr[],int size){

    int numberOfPair = 0;

    if(arr[size-1] > arr[0]){
        numberOfPair++;
    }

    for (int i = 1; i < size; i++)
    {
        if(arr[i-1] > arr[i]){
            numberOfPair++;

            if(numberOfPair > 1){
                return false;
            }
        }
    }
    


    return (numberOfPair == 1 || numberOfPair == 0);
}


void sumOfTwoArray(int arr[],int size,int arr1[],int size1){

    vector<int> result;
    int i = size-1;
    int j = size1-1;
    int carry = 0;
    

    while (i >= 0 && j >= 0)
    {
        int sum = arr[i--] + arr1[j--] + carry;

        int ans = sum%10;
        carry = sum/10;

        result.push_back(ans);
    }

    while (i >= 0)
    {
        int sum = arr[i--] + carry;

         int ans = sum%10;
        carry = sum/10;

        result.push_back(ans);
    }

    while (j >= 0)
    {
        int sum = arr1[j--] + carry;

        int ans = sum%10;
        carry = sum/10;

        result.push_back(ans);
    }

    while (carry != 0)
    {
        int sum = carry;

        int ans = sum%10;
        carry = sum/10;

        result.push_back(ans);
    }
    
    
    for (int i = result.size()-1; i >= 0; i--)
    {
        cout <<result[i] << " ";
    }
}


int main(){

    int arr[3] = {9,9,1};
    int arr1[2] = {9,1};

    // rotateArrByK(arr,10,10);

    // cout <<ifArraySortedAndRoated(arr,10);


    sumOfTwoArray(arr,3,arr1,2);

    return 0;
}