#include <iostream>
#include <map>
using namespace std;

bool isPossibleSol(int arr[],int size,int m,int ans){

    int student = 1;
    int pageSum = 0;

    for (int i = 0; i < size; i++)
    {
        if((pageSum + arr[i]) <= ans){
            pageSum += arr[i];
        }
        else {
            student = student + 1;
            
            if(student > m || arr[i] > ans || pageSum == 0){
                return false;
            }
            
            pageSum = arr[i];

        }
    }
    
    return true;
}


bool isPossibleSol1(int arr[],int size,int m,int ans){

    int cowNumner = 1;
    int lastPos = arr[0];

    for (int i = 0; i < size; i++)
    {
        if((arr[i] - lastPos) >= ans){
            cowNumner += 1;
            
            if(cowNumner == m){
                return true;
            }

            lastPos = arr[i];
        }  
    }
    
    return false;
}

int bookAllocationProblam(int arr[],int size,int m){

    int min = INT16_MAX;
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        if(min > arr[i]){
            min = arr[i];
        }
    }
    

    int start = min;
    int end = sum;
    int mid = start + (end - start)/2;
    int ans = -1;

    // cout <<start <<" " <<end <<endl;

    while (start <= end)
    {
        if(isPossibleSol(arr,size,m,mid)){
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }
    
    return ans;
}


int AggresiveCows(int arr[],int size,int m){

    int min = INT32_MAX;
    int max = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        if(min > arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }
    

    int start = min;
    int end = max;
    int mid = start + (end - start)/2;
    int ans = -1;

    // cout <<start <<" " <<end <<endl;

    while (start <= end)
    {
        if(isPossibleSol1(arr,size,m,mid)){
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    
    return ans;
}


int main(){

    int arr[5] = {5,5,5,5};
    int m = 2;

    cout <<bookAllocationProblam(arr,4,m);

    
    // int arr[5] = {1,2,3,4,6};
    // int m = 2;

    // cout <<AggresiveCows(arr,5,m);
}



