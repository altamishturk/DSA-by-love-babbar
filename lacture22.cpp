#include <iostream>
#include <map>
using namespace std;

char toUpperCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        ch = ch-32;
    }
    return ch;
}

char toLowerCase(char ch){

    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }

    char result = ch - 'A' + 'a';

    return result;
}

bool isPalindrome(string str){

    int i = 0;
    int j = str.length()-1;

    while (i < j)
    {

        char sCh = toLowerCase(str[i]);
        char eCh = toLowerCase(str[j]);

        
        while (toLowerCase(str[i]) < 'a' || toLowerCase(str[i]) > 'z')
        {
            i++;
        }
        while (toLowerCase(str[j]) < 'a' || toLowerCase(str[j]) > 'z')
        {
            j--;
        }
        
        if(toLowerCase(str[i]) != toLowerCase(str[j])){
            return false;
        }

        i++;
        j--;
    }

    return true;
}

string reverseWords(string str){

    int i = 0;
    int j = 0;
    string finalStr;

    while (i < (str.length()-1))
    {
        if(str[j] == ' '){
            int k = j;
            while (k >= i)
            {
                k--;
                finalStr.push_back(str[k]);
            }
            finalStr.push_back(' ');
            j++;
            i = j;
        }
        else {
            j++;
        }
    }
    


    return finalStr;
}

char maxOccuringChar(string str){

    
    int arr[26] = {0};

    char maxChar;
    char maxValue = 0;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        int indexOfCh = 0;

        if(ch >= 'a' && ch <= 'z'){
            indexOfCh = ch - 'a';
        }
        else {
            indexOfCh = ch - 'A';
        }

        arr[indexOfCh]++;

        if(arr[indexOfCh] > maxValue){
            maxChar = ch;
            maxValue = arr[indexOfCh];
        }
    }
    
    return maxChar;
}

string removeSpacesAndPutGivenStr(string str,string str1){

    // string result;

    // for (int i = 0; i < str.length(); i++)
    // {
    //     if(str[i] == ' '){
    //         str[i] = '@40';
    //     }
    // }


    // Step 1: Count spaces
    int spaceCount = 0;
    for (char c : str) {
        if (c == ' ') spaceCount++;
    }

    // Step 2: Resize string to hold extra characters
    int oldLength = str.length();
    int newLength = oldLength + (2 * spaceCount);  // '@40' replaces ' ', so +2 per space
    str.resize(newLength);

    // Step 3: Replace from back
    int i = oldLength - 1;
    int j = newLength - 1;

    while (i >= 0) {
        if (str[i] == ' ') {
            str[j--] = '0';
            str[j--] = '4';
            str[j--] = '@';
        } else {
            str[j--] = str[i];
        }
        i--;
    }
    

    return str;
}

bool compareWindows(int arr[],int arr1[]){

 
    for (int i = 0; i < 26; i++)
    {
        if(arr[i] != arr1[i]){
            return false;
        }
    }
    

    return true;
}

bool isPermutationOfString(string s1, string s2){

    int s1ChCount[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        char ch = s1[i];
        int index = ch - 'a';
        s1ChCount[index]++;
    }
    

    int i = 0;
    int windowSize = s1.length();
    int s2ChCount[26] = {0};

    while (i < windowSize)
    {
        char ch = s2[i];
        int index = ch - 'a';
        s2ChCount[index]++;
        i++;
    }

    if(compareWindows(s1ChCount,s2ChCount) == 1){
        return true;
    }

    int k = windowSize;

    while (k < s2.length())
    {
        char nextCh = s2[k];
        int nextIndex = nextCh - 'a';
        s2ChCount[nextIndex]++;

        char prevCh = s2[k-windowSize];
        int prevIndex = prevCh - 'a';
        s2ChCount[prevIndex]--;

        if(compareWindows(s2ChCount,s1ChCount)){
            return true;
        };

        k++;
    }
    

    return false;

}

int main(){

    string name;

    cout <<"Enter Any String" <<endl;
    getline(cin,name);
    

    cout <<isPalindrome(name);

    // char a = 'A';

    // char b = a - 'A' + 'a';

    // cout <<b;

    // string largestWord;
    // string word;

    // for (int i = 0; i < name.length(); i++)
    // {
    //     char ch = name[i];

    //     if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
    //         word += ch;
    //     }
    //     else {
    //         if(largestWord.length() < word.length()){
    //             largestWord = word;
    //         }
    //         cout <<word<<endl;
    //         word = "";
    //     }

    //     if(name.length()-1 == i){
    //         if(largestWord.length() < word.length()){
    //             largestWord = word;
    //         }
    //         cout <<word<<endl;
    //         word = "";
    //     }
    // }
    
    // cout <<largestWord;

    // cout <<reverseWords(name);

    // cout <<maxOccuringChar(name);

    // string str = "@40";

    // cout << removeSpacesAndPutGivenStr(name,str);


    // string s1 = "ab";
    // string s2 = "eidbooo";

    // cout <<"Enter S1 string" <<endl;
    // cin >>s1;
    // cout <<"Enter S2 string" <<endl;
    // cin >>s2;

    // cout <<"Final Ans "<< isPermutationOfString(s1,s2);

    return 0;
}