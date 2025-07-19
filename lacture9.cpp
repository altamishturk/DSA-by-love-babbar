#include<iostream>
using namespace std;

int sumOfArray(int arr[], int length){

    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    
    return sum;
}

int main(){
    
    cout << "enter length of arr" <<endl;

    int length;
    cin >> length;

    cout << "anter array";

    int arr[length];

    for (int i = 0; i < length; i++)
    {
        cin >>arr[i];
    }
    

    cout <<sumOfArray(arr,length);
}