
#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>
using namespace std;

// recursion function to calculate factorial 
int fact(int n){

    if(n == 0 || n == 1){
        return 1;
    }

    return n * fact(n-1);
}

void printNumber1toN(int n){
    // base case 
    if(n == 0){
        return;
    }

    printNumber1toN(n-1);

    cout <<n << " ";
}

void printNumberNTo1(int n){
    // base case 
    if(n == 0){
        return;
    }

    cout <<n << " ";

    printNumberNTo1(n-1);

}

void generateBinary(int n, string str){

    if(n == 0){
        cout <<str <<endl;
        return;
    }

    // recursive call 
    generateBinary(n-1,str+'1'); // add 1 
    generateBinary(n-1,str+'0'); // add 0 
}


void permute(string &s, int index = 0) {
    // Base case: if the index reaches the end, print the permutation
    if (index == s.length()) {
        cout << s << endl;
        return;
    }

    // Loop through the string and swap each character with the current index
    for (int i = index; i < s.length(); i++) {
        swap(s[index], s[i]);           // 🔹 Choose: fix one char at index
        permute(s, index + 1);          // 🔁 Explore: permute rest of string
        swap(s[index], s[i]);           // 🔙 Unchoose (backtrack)
    }
}


int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }

    return fib(n-1) + fib(n-2);
}


int climbWays(int n){
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }

    return climbWays(n-1)+climbWays(n-2);
}

void subsetProblem(string str,string subset = "",int index = 0){

    if(str.length() == index){
        cout <<subset <<endl;
        return;
    }

    // include 
    subsetProblem(str,subset+str[index],index+1);

    // exclude 
    subsetProblem(str,subset,index+1);
}

void keypadProblem(string digits,string map[],int index = 0,string ans = ""){
    if(index == digits.length()){
        cout <<ans <<endl;
        return;
    }

    int num = digits[index] - '0';

    string value = map[num];

    for (int i = 0; i < value.length(); i++)
    {
        ans.push_back(value[i]);
        keypadProblem(digits,map,index+1,ans);
        ans.pop_back();
    }
}

void reverseAString(string &str,int start, int end){
    if(start >= end){
        return;
    }

    swap(str[start],str[end]);

    reverseAString(str,start+1,end-1);
}


bool isPalindrome(string &str,int start, int end){
    if(start >= end){
        return true;
    }

    if(str[start] != str[end]){
        return false;
    }

    return isPalindrome(str,start+1,end-1);
}


void toh(int n, char a, char b, char c){
    if(n == 0){
        return;
    }


    toh(n-1,a,c,b);
    cout <<"move " <<n << " from " <<a << " to "  <<c <<endl;
    toh(n-1,b,a,c);
}


int gcd(int a, int b){
    if(b == 0){
        return a;
    }

    return gcd(b,a%b);
}


int countNumber(int digit,int count=0){
    if(digit == 0){
        return count;
    }

    count++;
    digit = digit/10;

    return countNumber(digit,count);
}



void subSequences(string str,set<string> &arr,string ans = "",int index= 0){
    if(index == str.length()){

        if(ans != ""){
            arr.insert(ans);
        }
        return;
    }

    subSequences(str,arr,ans,index+1);
    subSequences(str,arr,ans+str[index],index+1);
}


void ratInMaze(int arr[][4],int visited[][4],string ans = "",int i = 0, int j = 0){
    if(i == 3 && j == 3){
        cout <<ans <<endl;
        return;
    }


    // up 
    if(i-1 >= 0 && arr[i-1][j] != 0 && visited[i-1][j] == 0){
        ans.push_back('U');
        visited[i][j] = 1;
        ratInMaze(arr,visited,ans,i-1,j);
        visited[i][j] = 0;
        ans.pop_back();
    }
    // down 
    if(i+1 <= 3 && arr[i+1][j] != 0 && visited[i+1][j] == 0){
        ans.push_back('D');
        visited[i][j] = 1;
        ratInMaze(arr,visited,ans,i+1,j);
        visited[i][j] = 0;
        ans.pop_back();
    }
    // left 
    if(j-1 >= 0 && arr[i][j-1] != 0 && visited[i][j-1] == 0){
        ans.push_back('L');
        visited[i][j] = 1;
        ratInMaze(arr,visited,ans,i,j-1);
        visited[i][j] = 0;
        ans.pop_back();
    }
    // right 
    if(j+1 <= 3 && arr[i][j+1] != 0 && visited[i][j+1] == 0){
        ans.push_back('R');
        visited[i][j] = 1;
        ratInMaze(arr,visited,ans,i,j+1);
        visited[i][j] = 0;
        ans.pop_back();
    }
}

void mSort(int arr[], int start,int end){

    int mid = start + (end-start)/2;
    int len1 = (mid-start)+1;
    int len2 = end-mid;

    int *temp1 = new int[len1];
    int *temp2 = new int[len2];

    int mainArrIndex = start;

    // copy first array 
    for (int i = 0; i < len1; i++)
    {
        temp1[i] = arr[mainArrIndex++];
    }


    // copy second array 
    for (int i = 0; i < len2; i++)
    {
        temp2[i] = arr[mainArrIndex++];
    }


    int i = 0;
    int j = 0;
    mainArrIndex = start;
    
    while(i < len1 && j < len2){
        if(temp1[i] < temp2[j]){
            arr[mainArrIndex++] = temp1[i++];
        }
        else {
            arr[mainArrIndex++] = temp2[j++];
        }
    }

    while (i < len1)
    {
        arr[mainArrIndex++] = temp1[i++];
    }

    while (j < len2)
    {
        arr[mainArrIndex++] = temp2[j++];
    }
    
    

    delete[] temp1;
    delete[] temp2;
}


void mergeSort(int arr[],int start,int end){
    if(start >= end){
        return;
    }

    int mid = start + (end - start)/2;

    // left part 
    mergeSort(arr,start,mid);

    // right part 
    mergeSort(arr,mid+1,end);

    // cout <<start <<" " <<end <<endl;

    mSort(arr,start,end);
}





int partation(int arr[], int start,int end){


    int povet = arr[start];
    int count = 0;

    for (int i = start+1; i <= end; i++)
    {
        if(povet >= arr[i]){
            count = count+1;
        }
    }

    int povetIndex = start + count;

    // swap povet with its correct position 
    swap(arr[start],arr[povetIndex]);

    int i = start;
    int j = end;

    while (i < povetIndex && j > povetIndex)
    {
        while (arr[i] <= arr[povetIndex])
        {
            i++;
        }

        while (arr[j] > arr[povetIndex])
        {
            j--;
        }
        
        if(i < povetIndex && j > povetIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    
    return povetIndex;
}


void quickSort(int arr[],int start,int end){
    if(start >= end){
        return;
    }

    int povet = partation(arr,start,end);

    // sort left 
    quickSort(arr,start,povet-1);

    // sort right 
    quickSort(arr,povet+1,end);
}


int main(){

    // printNumber1toN(20);
    // cout <<endl;
    // printNumberNTo1(20);

    // string str = "";
    // int n = 5;

    // generateBinary(n,str);

    // string str = "AB";

    // permute(str); 

    // cout <<fib(5);

    // cout <<climbWays(5);

    // subsetProblem("abc");

    // string map[10] = {"","abc","def","ghi","jkl","mno","pqr","stu","vwx","yx"};

    // keypadProblem("45",map);

    // string str = "abcdefghijkl";

    // reverseAString(str,0,str.length()-1);


    // string str = "aba";

    // bool ans = isPalindrome(str,0,str.length()-1);

    // cout <<ans;


    // toh(2,'A','B','C');


    // cout <<gcd(48,18);

    // cout <<countNumber(122111);

    // string str = "geeks";
    // set<string> arr;

    // subSequences(str,arr);

    // cout <<arr.size();



    // int arr[4][4] = {
    //     {1,0,1,0},
    //     {1,1,1,0},
    //     {0,0,1,0},
    //     {0,0,1,1},
    // };

    // int visited[4][4] = {};

    // ratInMaze(arr,visited);

    // int arr[5] = {3,5,56,7,4};

    // mergeSort(arr,0,4);

    // for (int i = 0; i < 5; i++)
    // {
    //     cout <<arr[i] << " ";
    // }


    int arr[9] = {3,5,56,7,4,12,33,44,1};

    quickSort(arr,0,8);

    for (int i = 0; i < 9; i++)
    {
        cout <<arr[i] << " ";
    }

    return 0;
}