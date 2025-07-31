
#include <iostream>
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


    toh(2,'A','B','C');

    return 0;
}