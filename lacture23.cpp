#include <iostream>
using namespace std;


void rotate2dArrBy90Deg(int arr[][3],int rowLen){

    for (int row = 0; row < rowLen; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (row < col) {
                swap(arr[row][col], arr[col][row]);
            }
        }
    }

    for (int row = 0; row < rowLen; row++)
    {
        int start = 0;
        int end = 2;

        while (start < end)
        {
            swap(arr[row][start] ,arr[row][end]);

            start++;
            end--;
        }
    }

    for (int row = 0; row < rowLen; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            // cout <<"r" <<row << " c"<< col <<endl;
            cout <<arr[row][col];
        }
        cout<<endl;
    }
}


int main(){

    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    rotate2dArrBy90Deg(arr,3);

    return 0;
}