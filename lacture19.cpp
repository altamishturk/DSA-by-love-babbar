#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


void learnVector(){
    vector<int> v = {13,34,34,5456,47,34,234,34,45,2343,2345};

    sort(v.begin(),v.end());

    cout <<"Vector Number" <<endl;

    for (int num : v)
    {
        cout <<num << " ";
    }
    
}

void learnMap(){
    map<string,int> studentRoll;

    studentRoll["altamish"] = 1;
    studentRoll["rukhsar"] = 2;

    for (auto && student : studentRoll)
    {
        cout << student.first << " " << student.second <<endl;
    }
    
}


int main(){
    learnVector();
    // learnMap();
}