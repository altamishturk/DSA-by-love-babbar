#include<iostream>
using namespace std;

int main(){



    // int a,b = 1;

    // a = 10;

    // if(false){
    //     cout <<b;
    // }
    // else {
    //     cout <<++b;
    // }


    // int a = 1;
    // int b = 2;

    // if(a-- > 0 && ++b > 2){
    //     cout <<"Stage1 - Inside If" <<endl;
    // }
    // else {
    //     cout <<"Stage2 - Inside else" <<endl;
    // }

    // cout << a << " " << b << endl;


    // int a = 1;
    // int b = 2;

    // if(a-- > 0 || ++b > 2){
    //     cout <<"Stage1 - Inside If" <<endl;
    // }
    // else {
    //     cout <<"Stage2 - Inside else" <<endl;
    // }

    // cout << a << " " << b << endl;


    // int number = 3;
    
    // cout <<(25 * (++number));


    // int a = 1;
    // int b = a++;
    // int c = ++a;

    // cout <<b;
    // cout <<c;



    // for (int i = 0; i <= 5; i++)
    // {
    //     cout << i << " ";
    //     i++;
    // }
    

    // for (int i = 0; i <= 5; i--)
    // {
    //     cout <<i<<" ";

    //     i++;
    // }
    

    // for (int i = 0; i <= 15; i+=2)
    // {
    //     cout <<i<<" ";

    //     if(i&1){
    //         continue;
    //     }

    //     i++;
    // }


    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; j <= 5; j++)
    //     {
    //         cout <<i <<" " <<j <<endl;
    //     }
        
    // }
    

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if(i+j == 10){
                break;;
            }
            
            cout <<i << " "<<j << endl;
        }
        
    }
    
    
}
